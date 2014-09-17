struct PT {
	double x, y;
	PT() {}
	PT(double x, double y): x(x), y(y) {}
	PT operator+(const PT& p) const { 
		return PT(x + p.x, y + p.y);
	}
	PT operator-(const PT& p) const { 
		return PT(x - p.x, y - p.y);
	}
	PT operator*(double c) const { 
		return PT(x * c, y * c);
	}
	PT operator/(double c) const { 
		return PT(x / c, y / c);
	}
	double operator*(const PT& p) const { 
		return x * p.x + y * p.y;
	}
	double operator^(const PT& p) const { 
		return x * p.y - y * p.x;
	}
};
