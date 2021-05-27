//查找路径的方式
class Solution {
public:
	bool TreeFind(TreeNode* root, TreeNode* x)
	{
		if (root == nullptr)
			return false;
		if (root == x)
			return true;

		//你会发现思路在一步的时候是有可能卡住的，你仔细想一下
		//那么下边已经把根的情况都考虑完了，剩下的不就应该是在左树中或者右树中了吗？并且我只是想要知道这个结点在不在这里面，不要得到它的结点
		return TreeFind(root->left, x) || TreeFind(root->right, x);
	}
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == nullptr)
			return nullptr;
		//整个考虑完了以后就会发现，其实还漏了一种情况，比如说5和4的公共结点，那么这个公共结点就是5
		if (p == root || q == root)
		{
			return root;
		}
		bool pInLeft, pInRight, qInLeft, qInRight;
		//且p、q结点均在二叉树中
		pInLeft = TreeFind(root->left, p);
		pInRight = !pInLeft; //在左边了，肯定不会在右边了，否则情况相反

		qInLeft = TreeFind(root->left, q);
		qInRight = !qInLeft;

		//一个在左树，一个在右树的时候，就不用考虑了，此时根结点就是他们的公共结点
		if ((pInLeft && qInRight) || (pInRight && qInLeft))
			return root;
		else if (pInLeft && qInLeft)
			return lowestCommonAncestor(root->left, p, q);
		else
			return lowestCommonAncestor(root->right, p, q);
	}
};

//递归子问题的方式
class Solution {
public:
	bool TreeFind(TreeNode* root, TreeNode* x)
	{
		if (root == nullptr)
			return false;
		if (root == x)
			return true;

		//你会发现思路在一步的时候是有可能卡住的，你仔细想一下
		//那么下边已经把根的情况都考虑完了，剩下的不就应该是在左树中或者右树中了吗？并且我只是想要知道这个结点在不在这里面，不要得到它的结点
		return TreeFind(root->left, x) || TreeFind(root->right, x);
	}
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == nullptr)
			return nullptr;
		//整个考虑完了以后就会发现，其实还漏了一种情况，比如说5和4的公共结点，那么这个公共结点就是5
		if (p == root || q == root)
		{
			return root;
		}
		bool pInLeft, pInRight, qInLeft, qInRight;
		//且p、q结点均在二叉树中
		pInLeft = TreeFind(root->left, p);
		pInRight = !pInLeft; //在左边了，肯定不会在右边了，否则情况相反

		qInLeft = TreeFind(root->left, q);
		qInRight = !qInLeft;

		//一个在左树，一个在右树的时候，就不用考虑了，此时根结点就是他们的公共结点
		if ((pInLeft && qInRight) || (pInRight && qInLeft))
			return root;
		else if (pInLeft && qInLeft)
			return lowestCommonAncestor(root->left, p, q);
		else
			return lowestCommonAncestor(root->right, p, q);
	}
};