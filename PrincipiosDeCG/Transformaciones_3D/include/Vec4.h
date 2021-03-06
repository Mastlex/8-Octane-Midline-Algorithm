#pragma once
#include <math.h>
class Vec4
{
public:
	Vec4();
	Vec4(const float& x, const float& y, const float& z, const float& w);
	~Vec4();

	float x, y, z, w;
	float dot(const Vec4& rh); //producto punto
	static Vec4 cross(const Vec4& lh, const Vec4& rh); //producto cruz
	void normalize(); //normaliza el vector (longitud = 1)
	void homogenize(); // lleva el vector a w = 1
	Vec4 operator- (const Vec4& RH) const;
};

