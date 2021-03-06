#include <GL/glut.h>

void display(void)
{
   /* Limpar todos os pixels  */
   glClear (GL_COLOR_BUFFER_BIT);

   /* Desenhar um pol�gono (ret�ngulo) */
   glColor3f (0.0, 1.0, 0.0);
   glBegin(GL_POLYGON);
      glVertex3f (0.25, 0.25, 0.0);
      glColor3f (1.0, 0.0, 1.0);
      glVertex3f (0.75, 0.25, 0.0);
      glColor3f (1.0, 0.0, 0.0);
      glVertex3f (0.75, 0.75, 0.0);
      glColor3f (0.0, 0.0, 1.0);   
      glVertex3f (0.25, 0.75, 0.0);
   glEnd();

	glFlush ();
}


void init (void) 
{
  /* selecionar cor de fundo (branco) */
  glClearColor (1.0, 1.0, 1.0, 0.0);

  /* inicializar sistema de viz. */
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (300, 300);
   glutCreateWindow ("Hello World");
   init ();
   glutDisplayFunc(display); 
   glutMainLoop();

   return 0;
}
