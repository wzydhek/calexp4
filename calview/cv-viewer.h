#pragma once

#include "cv-global.h"

class Viewer
{
	// member variables
protected:
	int m_width;
	int m_height;
	bool m_bFullscreen;
	int m_mouseX;
	int m_mouseY;
	float m_tiltAngle;
	float m_twistAngle;
	float m_distance;
	bool m_bLeftMouseButtonDown;
	bool m_bRightMouseButtonDown;
	unsigned int m_lastTick;
	bool m_bPaused;
	CalCoreModel *m_calCoreModel;
	CalCoreAnimation *m_calCoreAnimation;
	CalModel m_calModel;
	float m_time;
	GLuint m_texture;
	float m_scale;
	float m_lodLevel;
	int m_vertexCount;
	int m_faceCount;

	// constructors/destructor
public:
	Viewer();
	virtual ~Viewer();

	// member functions
public:
	std::string getCaption();
	bool getFullscreen();
	int getHeight();
	int getWidth();
	bool onCreate(int argc, char *argv[]);
	void onIdle();
	bool onInit();
	void onKey(unsigned char key, int x, int y);
	void onMouseButtonDown(int button, int x, int y);
	void onMouseButtonUp(int button, int x, int y);
	void onMouseMove(int x, int y);
	void onRender();
	void onShutdown();
	void setDimension(int width, int height);

protected:
	void renderCursor();
	void renderModel();
};

extern Viewer theViewer;
