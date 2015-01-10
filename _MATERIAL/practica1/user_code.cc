//**************************************************************************
// Codigo del usuario
//
// Domingo Martin Perandres 2013
//
// GPL
//**************************************************************************

#include "user_code.h"

//**************************************************************************
// Funcion para dibujar los vertices de un cubo unidad
//***************************************************************************

void draw_cube()
{
    GLfloat Vertices[8][3]= {
    							{-0.5,-0.5,0.5},
    							{0.5,-0.5,0.5},
    							{0.5,0.5,0.5},
    							{-0.5,0.5,0.5},
    							{-0.5,-0.5,-0.5},
    							{0.5,-0.5,-0.5},
    							{0.5,0.5,-0.5},
    							{-0.5,0.5,-0.5}
    						};

    glColor3f(0,1,0);
    glPointSize(4);

    glBegin(GL_POINTS);
    for (unsigned i=0;i<8;i++){
        glVertex3fv((GLfloat *) &Vertices[i]);
        }
    glEnd();


    // Definimos un vector de float
    vector<float> vertices;
    vector<int> caras;


    _file_ply lector;

    char* file = "ant.ply";

	// lector.open(file);
	// lector.read(vertices, caras);

 //    // vertices.push_back(1.5);
 //    // vertices.push_back(-0.5);
 //    // vertices.push_back(1.0);

 //    draw_vertices(vertices);
}

//**************************************************************************
// Funcion para dibujar vertices
//***************************************************************************

void draw_vertices(vector<float> &Vertices)
{

	glBegin(GL_TRIANGLES);
	glVertex3fv((GLfloat *) &Vertices);
	glEnd();

}
