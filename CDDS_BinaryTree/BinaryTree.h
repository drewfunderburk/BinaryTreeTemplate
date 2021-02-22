#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

#pragma once

class TreeNode;

class BinaryTree
{
public:

	BinaryTree() { m_root = nullptr; };
	~BinaryTree();

	/// <summary>
	/// Returns true if the root is nullptr
	/// </summary>
	bool isEmpty() const { return m_root == nullptr; };

	/// <summary>
	/// Inserts a given value into the tree
	/// </summary>
	void insert(int value);

	/// <summary>
	/// Removes a given value from the tree
	/// </summary>
	void remove(int value);

	/// <summary>
	/// Returns a pointer to the node that holds the given value
	/// </summary>
	TreeNode* find(int value);

	/// <summary>
	/// Draws the tree and marks the given node as selected
	/// </summary>
	void draw(TreeNode* selected = nullptr);

private:
	/// <summary>
	/// Finds the node with the given value and its parent
	/// </summary>
	bool findNode(int searchValue, TreeNode*& nodeFound, TreeNode*& nodeParent);

	/// <summary>
	/// Calls draw for every node in the tree
	/// </summary>
	void draw(TreeNode*, int x, int y, int horizontalSpacing, TreeNode* selected = nullptr);

	TreeNode* m_root;
};

#endif