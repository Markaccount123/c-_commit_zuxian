//����·���ķ�ʽ
class Solution {
public:
	bool TreeFind(TreeNode* root, TreeNode* x)
	{
		if (root == nullptr)
			return false;
		if (root == x)
			return true;

		//��ᷢ��˼·��һ����ʱ�����п��ܿ�ס�ģ�����ϸ��һ��
		//��ô�±��Ѿ��Ѹ���������������ˣ�ʣ�µĲ���Ӧ�����������л������������𣿲�����ֻ����Ҫ֪���������ڲ��������棬��Ҫ�õ����Ľ��
		return TreeFind(root->left, x) || TreeFind(root->right, x);
	}
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == nullptr)
			return nullptr;
		//�������������Ժ�ͻᷢ�֣���ʵ��©��һ�����������˵5��4�Ĺ�����㣬��ô�������������5
		if (p == root || q == root)
		{
			return root;
		}
		bool pInLeft, pInRight, qInLeft, qInRight;
		//��p��q�����ڶ�������
		pInLeft = TreeFind(root->left, p);
		pInRight = !pInLeft; //������ˣ��϶��������ұ��ˣ���������෴

		qInLeft = TreeFind(root->left, q);
		qInRight = !qInLeft;

		//һ����������һ����������ʱ�򣬾Ͳ��ÿ����ˣ���ʱ�����������ǵĹ������
		if ((pInLeft && qInRight) || (pInRight && qInLeft))
			return root;
		else if (pInLeft && qInLeft)
			return lowestCommonAncestor(root->left, p, q);
		else
			return lowestCommonAncestor(root->right, p, q);
	}
};

//�ݹ�������ķ�ʽ
class Solution {
public:
	bool TreeFind(TreeNode* root, TreeNode* x)
	{
		if (root == nullptr)
			return false;
		if (root == x)
			return true;

		//��ᷢ��˼·��һ����ʱ�����п��ܿ�ס�ģ�����ϸ��һ��
		//��ô�±��Ѿ��Ѹ���������������ˣ�ʣ�µĲ���Ӧ�����������л������������𣿲�����ֻ����Ҫ֪���������ڲ��������棬��Ҫ�õ����Ľ��
		return TreeFind(root->left, x) || TreeFind(root->right, x);
	}
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == nullptr)
			return nullptr;
		//�������������Ժ�ͻᷢ�֣���ʵ��©��һ�����������˵5��4�Ĺ�����㣬��ô�������������5
		if (p == root || q == root)
		{
			return root;
		}
		bool pInLeft, pInRight, qInLeft, qInRight;
		//��p��q�����ڶ�������
		pInLeft = TreeFind(root->left, p);
		pInRight = !pInLeft; //������ˣ��϶��������ұ��ˣ���������෴

		qInLeft = TreeFind(root->left, q);
		qInRight = !qInLeft;

		//һ����������һ����������ʱ�򣬾Ͳ��ÿ����ˣ���ʱ�����������ǵĹ������
		if ((pInLeft && qInRight) || (pInRight && qInLeft))
			return root;
		else if (pInLeft && qInLeft)
			return lowestCommonAncestor(root->left, p, q);
		else
			return lowestCommonAncestor(root->right, p, q);
	}
};