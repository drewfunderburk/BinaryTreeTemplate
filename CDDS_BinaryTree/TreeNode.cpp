#include "TreeNode.h"
#include <iostream>
#include "raylib.h"

TreeNode::TreeNode(int value)
{
	m_value = value;
}

void TreeNode::draw(int x, int y, bool selected)
{
	// Create char array  to store value
	static char buffer[10];
	// Use sprintf to write m_value to buffer
	sprintf(buffer, "%d", m_value);

	// Draw the node to the screen
	DrawCircle(x, y, 30, YELLOW);

	// Change color if selected
	if (selected)
		DrawCircle(x, y, 28, GREEN);
	else
		DrawCircle(x, y, 28, BLACK);

	// Draw value over the node
	DrawText(buffer, x - 12, y - 12, 12, WHITE);
}