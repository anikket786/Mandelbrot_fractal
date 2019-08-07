#pragma once

#include <string>
#include <cstdint>
using namespace std;

class Bitmap
{
private:
	int m_width{ 0 };
	int m_height{ 0 };
	unique_ptr<uint8_t[]> pPixels{ nullptr };

public:
	Bitmap(int width, int height);
	bool write(string filename);
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	virtual ~Bitmap();
};

