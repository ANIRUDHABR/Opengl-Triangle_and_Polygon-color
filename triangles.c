#include<GL/glut.h>
void initGL()
{
	glClearColor(1.0,1.0,1.0,0.0);		//sets background colour as white
}
void display()
{


	glClear(GL_COLOR_BUFFER_BIT);
	
	//construction of triangle 
	//Below here the co-ordinates are given in anti-clockwise.
	glBegin(GL_TRIANGLES);
		 
	  glColor3f(0.0,0.5,0.0);		//this gives drak-green color to your triangle
	  glVertex2f(-0.24f, -0.43f);		//vertex points(x, y)
      glVertex2f(0.24f, -0.43f);
      glVertex2f(0.0f, 0.0f);
      
	  glColor3f(1.54,0.0,1.0);  //similarly pink
	  glVertex2f(0.24f, -0.43f);
      glVertex2f(0.5f, 0.0f);
      glVertex2f(0.0f, 0.0f);      
      
      glColor3f(1.0,0.5,0.0);	//orange
	  glVertex2f(0.0f, 0.0f);
      glVertex2f(0.5f, 0.0f);
      glVertex2f(0.24f, 0.43f);      
      
      glColor3f(0.0,0.0,1.56);	//blue
	  glVertex2f(0.0f, 0.0f);
      glVertex2f(0.24f, 0.43f);
      glVertex2f(-0.24f, 0.43f);      
      
      glColor3f(1.5,1.9,0.0);	//yellow
	  glVertex2f(-0.5f, 0.0f);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(-0.24f, 0.43f);      
      
      glColor3f(1.0,0.0,0.0);	//red
	  glVertex2f(-0.24f, -0.43f);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(-0.5f, 0.0f);      
      
      glEnd();
	
glFlush();
}
void main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Polygon and Triangles");
	initGL();
	glutDisplayFunc(display);
	glutMainLoop();
}
