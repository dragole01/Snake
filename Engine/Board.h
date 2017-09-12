#pragma once

#include "Graphics.h"
#include "Location.h"

class Board
{
private:
	static constexpr Color borderColor = Colors::Blue;
	static constexpr int dimension = 20;
	static constexpr int cellPadding = 1;
	static constexpr int width = 32;
	static constexpr int height = 24;
	static constexpr int borderWidth = 4;
	static constexpr int borderPadding = 2;
	static constexpr int x = 70;
	static constexpr int y = 50;
	Graphics& gfx;

public:
	Board(Graphics&);
	void DrawCell(const Location&, Color);
	int GetGridWidth() const;
	int GetGridHeight() const;
	bool IsInsideBoard(const Location loc) const;
	void DrawBorder();
};