#pragma once

class Line {
public:
	Line(Point xp1, Point xp2);
	Line(const Line&);
	double GetLen();
private:
	Point p1, p2;
	double len;
};