#include "raylib.h"

class Button
{
	public:
		float x, y, width, height;
		Color color;

		Button(float inputX, float inputY, float inputWidth, float inputHeight, Color inputColor)
		{
			x = inputX;
			y = inputY;
			width = inputWidth;
			height = inputHeight;
			color = inputColor;
		}

		Rectangle getRec()
		{
			return Rectangle{ x, y, width, height };
		}

		bool isClicked(float mouseX, float mouseY)
		{
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				if (GetMouseX() > x && GetMouseX() < x + width && GetMouseY() > y && GetMouseY < y + height)
				{
					return true;
				}

				else
				{
					return false;
				}
			}
		}

		void draw()
		{
			DrawRectangleRec(getRec(), color);
		}

};