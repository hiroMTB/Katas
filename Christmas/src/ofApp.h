#pragma once

#include "ofMain.h"
#include "Point.hpp"
#include "Grid.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    int worldX = 1000;
    int worldY = 1000;
    
    kata::Point     pnt{100, 100};
    kata::Grid      pntGrid{ worldX, worldY };
    
    
    
    
//		void keyPressed(int key);
//		void keyReleased(int key);
//		void mouseMoved(int x, int y );
//		void mouseDragged(int x, int y, int button);
//		void mousePressed(int x, int y, int button);
//		void mouseReleased(int x, int y, int button);
//		void mouseEntered(int x, int y);
//		void mouseExited(int x, int y);
//		void windowResized(int w, int h);
//		void dragEvent(ofDragInfo dragInfo);
//		void gotMessage(ofMessage msg);
		
};
