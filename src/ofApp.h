//created by Jiteng Liu (Leo)

#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#include "Math/MathUtils.h"

#include "Utils/ofTrueTypeFontExt.h"
#include "Utils/Cameras/ofxWalkingFirstPersonCamera.h"

class ofApp : public ofBaseApp
{
	public:
		
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
        void setNormals(ofMesh &mesh);
	
		ofxFirstPersonCamera	camera;
	
		ofTrueTypeFontExt		fontSmall;
    
    ofMesh mesh;        //set the mesh
    ofLight light;      //set the light
    int W = 500;        //set the width
    int H = 100;        //set the height
    ofImage background;     //load the image
};