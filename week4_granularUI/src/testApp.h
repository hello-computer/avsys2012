#ifndef _TEST_APP
#define _TEST_APP



#include "ofMain.h"
#include "granularManager.h"
#include "ofxUI.h"


class testApp : public ofSimpleApp{
	
	public:
		
	
		void setup();
		void update();
		void draw();
		
		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased();
		
		void audioRequested(float * input, int bufferSize, int nChannels); 
	
		granularManager	GM;
	
		float * audioData;
    
        ofxUICanvas *gui;
        void guiEvent(ofxUIEventArgs &e);
        bool drawFill;
        float red, green, blue, alpha;
    
};

#endif	