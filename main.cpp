#include "tgaimage.h"
#include <fstream>
#include <iostream>
#include <string>

const TGAColor white = TGAColor(255, 255, 255, 250);
const TGAColor red = TGAColor(255, 0, 0, 255);

int main(int argc, char** argv) {
	TGAImage image(100, 100, TGAImage::Format::RGB);

	for (int i = 0; i < image.get_height(); i++) {
		for (int j = 0; j < image.get_width(); j++) {
			if (j % 2 == 0) {
				image.set(j, i, (i % 2 != 0) ? white : red);
			}
			if (j % 2 != 0) {
				image.set(j, i, (i % 2 != 0) ? red : white);
			}
		}
	}
	   
	image.scale(1000, 500);
	image.write_tga_file("output.tga");
	return 0;
}
