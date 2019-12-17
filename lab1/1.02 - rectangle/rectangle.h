#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

 class Rectangle {

    private:
		float _width;
		float _height;
		float _perimeter;
		float _area;

    public:
		Rectangle();
		Rectangle(float width, float height);
		float get_perimeter();
		float get_area();
		void set_width(float x);
		void set_height(float y);
		float get_width();
		float get_height();
      
};

#endif
