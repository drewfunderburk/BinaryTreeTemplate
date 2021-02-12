#include "TreeNode.h"
#include <iostream>
#include "raylib.h"

TreeNode::TreeNode(int value)
{
	m_value = value;
}

void TreeNode::draw(int x, int y, bool selected)
{
	static char buffer[10];
	sprintf(buffer, "%d", m_value);

	DrawCircle(x, y, 30, YELLOW);

	if (selected)
		DrawCircle(x, y, 28, GREEN);
	else
		DrawCircle(x, y, 28, BLACK);

	DrawText(buffer, x - 12, y - 12, 12, WHITE);
}