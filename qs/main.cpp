

#include<stdlib.h>
#include<string.h>
#include<GL/glut.h>
#include<math.h>
float theta;
float u,v,y;
int i,pos=-660;
void animEnd();
void animEndGo();
void *currentfont;
int start=0;

void setFont(void *font)
{
 currentfont=font;
}
void drawstring(float x,float y,float z,char *string)
{
 char *c;
 glRasterPos3f(x,y,z);
 for(c=string;*c!='\0';c++)
 { glColor3f(0.0,0.0,0.0);
  glutBitmapCharacter(currentfont,*c);
 }
}

typedef float points[2];
void *font=GLUT_BITMAP_HELVETICA_18;
int LeftButtonDown,RightButtonDown;
void outputText(int x,int y, float r,float g, float b, int font, char* string)
{
 glColor3f(r,g,b);
 glRasterPos2f(x,y);
 int len,i;
 len=(int)strlen(string);
 for(i=0;i<len;i++)
 {
   glutBitmapCharacter((int*)font,string[i]);
 }
}


void snowfall()
{

    glPointSize(1.0);
 glColor3f(0.87,1,1);
 glBegin(GL_LINES);
 for(GLfloat x=-800;x<=800;x+=10)
  {
 for(int j=-800;j<200;j=j+10)
 {
     glVertex2f(x,-j);
  }
 }
 glEnd();
}



void setfontexplain(int m,int n)
{
 glPointSize(1.0);
 glBegin(GL_POLYGON);
 glColor3f(1,1,1);
 glVertex2f(-800,-600);
 glColor3f(1,1,1);
 glVertex2f(800,-600);
 glColor3f(1,1,1);
 glVertex2f(800,-700);
 glColor3f(1,1,1);
 glVertex2f(-800,-700);
 glEnd();
 glFlush();
}
void icepiece()
{
 glPointSize(1.0);
 glBegin(GL_POLYGON);

 glColor3f(0,0.8,0.8);
 glVertex2f(-800,300);
 glColor3f(0,0.8,0.8);
 glVertex2f(800,300);
 glColor3f(0,1.8,1.8);
 glVertex2f(800,0);
 glColor3f(0,1.8,1.8);
glVertex2f(-800,0);
 glEnd();
 glBegin(GL_POLYGON);

 glColor3f(0,0.8,0.8);
 glVertex2f(-800,-200);
 glColor3f(0,0.8,0.8);
 glVertex2f(800,-200);
 glColor3f(0,1.8,1.8);
 glVertex2f(800,0);
 glColor3f(0,1.8,1.8);
glVertex2f(-800,0);
 glEnd();

}

void water()
{
 glPointSize(1.0);
 glColor3f(0.49,0.91,0.81);
 glBegin(GL_LINES);
 for(GLfloat x=-800;x<-140;x+=25)
{
 for(int j=-800;j<=800;j=j+25)
 {
     glVertex2f(-j,x);
  }
 }
 glEnd();

}


void snowMan1(int m,int n)
{


 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);

 int a=660;

 //face
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=60*cos(theta);
 v=60*sin(theta);
 glVertex2f(-a+u+m,v+145+n);
 }
 glEnd();

 //body
 glPushMatrix();
 glPointSize(1.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/100;
 u=120*cos(theta);
 v=120*sin(theta);
 glVertex2f(-a+u+m,v-30+n);
 }
 glEnd();

 //left-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=7*cos(theta);
 v=7*sin(theta);
 glVertex2f((-(a+20))+u+m,v+160+n);
 }
 glEnd();


 //right-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=7*cos(theta);
 v=7*sin(theta);
 glVertex2f((-(a-20))+u+m,v+160+n);
 }
 glEnd();

 //nose
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m,120+n);
 glVertex2f(-(a+5)+m,160+n);
 glVertex2f(-(a-5)+m,160+n);
 glEnd();


 glPopMatrix();

 glFlush();
 glutSwapBuffers();
}
void snowMan2(int m,int n)
{
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);

 int a=470;

 int b=250;
 //face
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=50*cos(theta);
 v=50*sin(theta);
 glVertex2f(-a+u+m,v+145+b+n);
 }
 glEnd();

 //body
 glPushMatrix();
 glPointSize(1.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/100;
 u=100*cos(theta);
 v=100*sin(theta);
 glVertex2f(-a+u+m,v-00+b+n);
 }
 glEnd();

 //left-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=5*cos(theta);
 v=5*sin(theta);
 glVertex2f((-(a+20))+u+m,v+160+b+n);
 }
 glEnd();

 //right-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=5*cos(theta);
 v=5*sin(theta);
 glVertex2f((-(a-20))+u+m,v+160+b+n);
 }
 glEnd();

 //nose
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m,120+b+n);
 glVertex2f(-(a+5)+m,160+b+n);
 glVertex2f(-(a-5)+m,160+b+n);
 glEnd();

 glPopMatrix();
 glFlush();
 glutSwapBuffers();
}
void snowMan3(int m,int n)
{
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);

 int a=280;

 //face
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=60*cos(theta);
 v=60*sin(theta);
 glVertex2f(-a+u+m,v+145+n);
 }
 glEnd();

 //body
 glPushMatrix();
 glPointSize(1.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/100;
 u=120*cos(theta);
 v=120*sin(theta);
 glVertex2f(-a+u+m,v-30-n);
 }
 glEnd();

 //left-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=7*cos(theta);
 v=7*sin(theta);
 glVertex2f((-(a+20))+u+m,v+160+n);
 }
 glEnd();

 //right-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=7*cos(theta);
 v=7*sin(theta);
 glVertex2f((-(a-20))+u+m,v+160+n);
 }
 glEnd();

 //nose
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m,120+n);
 glVertex2f(-(a+5)+m,160+n);
 glVertex2f(-(a-5)+m,160+n);
 glEnd();

 glPopMatrix();
 glFlush();
 glutSwapBuffers();
}

void snowMan4(int m,int n)
{
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);

 int a=90;
int b=250;
 //face
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=50*cos(theta);
 v=50*sin(theta);
 glVertex2f(-a+u+m,v+145+b+n);
 }
 glEnd();

 //body
 glPushMatrix();
 glPointSize(1.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/100;
 u=100*cos(theta);
 v=100*sin(theta);
 glVertex2f(-a+u+m,v+b+n);
 }
 glEnd();

 //left-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=5*cos(theta);
 v=5*sin(theta);
 glVertex2f((-(a+20))+u+m,v+160+b+n);
 }
 glEnd();

 //right-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=5*cos(theta);
 v=5*sin(theta);
 glVertex2f((-(a-20))+u+m,v+160+b+n);
 }
 glEnd();

 //nose
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m,120+b+n);
 glVertex2f(-(a+5)+m,160+b+n);
 glVertex2f(-(a-5)+m,160+b+n);
 glEnd();

 glPopMatrix();
 glFlush();
 glutSwapBuffers();
}
void snowMan5(int m,int n)
{
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);

 int a=-100;

 //face
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=60*cos(theta);
 v=60*sin(theta);
 glVertex2f(-a+u+m,v+145+n);
 }
 glEnd();

 //body
 glPushMatrix();
 glPointSize(1.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/100;
 u=120*cos(theta);
 v=120*sin(theta);
 glVertex2f(-a+u+m,v-30+n);
 }
 glEnd();

 //left-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=7*cos(theta);
 v=7*sin(theta);
 glVertex2f((-(a+20))+u+m,v+160+n);
 }
 glEnd();

 //right-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=7*cos(theta);
 v=7*sin(theta);
 glVertex2f((-(a-20))+u+m,v+160+n);
 }
 glEnd();

 //nose
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m,120+n);
 glVertex2f(-(a+5)+m,160+n);
 glVertex2f(-(a-5)+m,160+n);
 glEnd();

 glPopMatrix();
 glFlush();
 glutSwapBuffers();
}
void snowMan6(int m,int n)
{
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);

 int a=-290;
int b=250;
 //face
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=50*cos(theta);
 v=50*sin(theta);
 glVertex2f(-a+u+m,v+145+b+n);
 }
 glEnd();

 //body
 glPushMatrix();
 glPointSize(1.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/100;
 u=100*cos(theta);
 v=100*sin(theta);
 glVertex2f(-a+u+m,v+b+n);
 }
 glEnd();

 //left-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=5*cos(theta);
 v=5*sin(theta);
 glVertex2f((-(a+20))+u+m,v+160+b+n);
 }
 glEnd();

 //right-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=5*cos(theta);
 v=5*sin(theta);
 glVertex2f((-(a-20))+u+m,v+160+b+n);
 }
 glEnd();

 //nose
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m,120+b+n);
 glVertex2f(-(a+5)+m,160+b+n);
 glVertex2f(-(a-5)+m,160+b+n);
 glEnd();

 glPopMatrix();
 glFlush();
 glutSwapBuffers();
}
void snowMan7(int m,int n)
{
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);

 int a=-480;

 //face
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=60*cos(theta);
 v=60*sin(theta);
 glVertex2f(-a+u+m,v+145+n);
 }
 glEnd();

 //body
 glPushMatrix();
 glPointSize(1.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/100;
 u=120*cos(theta);
 v=120*sin(theta);
 glVertex2f(-a+u+m,v-30+n);
 }
 glEnd();

 //left-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=7*cos(theta);
 v=7*sin(theta);
 glVertex2f((-(a+20))+u+m,v+160+n);
 }
 glEnd();

 //right-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=7*cos(theta);
 v=7*sin(theta);
 glVertex2f((-(a-20))+u+m,v+160+n);
 }
 glEnd();

 //nose
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m,120+n);
 glVertex2f(-(a+5)+m,160+n);
 glVertex2f(-(a-5)+m,160+n);
 glEnd();

 glPopMatrix();
 glFlush();
 glutSwapBuffers();
}
void snowMan8(int m,int n)
{
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);

 int a=-680;
int b=250;
 //face
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=50*cos(theta);
 v=50*sin(theta);
 glVertex2f(-a+u+m,v+145+b+n);
 }
 glEnd();

 //body
 glPushMatrix();
 glPointSize(1.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/100;
 u=100*cos(theta);
 v=100*sin(theta);
 glVertex2f(-a+u+m,v+b+n);
 }
 glEnd();

 //left-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=5*cos(theta);
 v=5*sin(theta);
 glVertex2f((-(a+20))+u+m,v+160+b+n);
 }
 glEnd();

 //right-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=5*cos(theta);
 v=5*sin(theta);
 glVertex2f((-(a-20))+u+m,v+160+b+n);
 }
 glEnd();

 //nose
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m,120+b+n);
 glVertex2f(-(a+5)+m,160+b+n);
 glVertex2f(-(a-5)+m,160+b+n);
 glEnd();

 glPopMatrix();
 glFlush();
 glutSwapBuffers();
}

void snowManEnd(int m,int n)
{
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);

 int a=670;
int b=0;
 //face
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=120*cos(theta);
 v=120*sin(theta);
 glVertex2f(-a+u+m,v+365+b+n);
 }
 glEnd();

 //body
 glPushMatrix();
 glPointSize(1.0);
 glColor3f(0.98431,1.2784,1.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/100;
 u=250*cos(theta);
 v=250*sin(theta);
 glVertex2f(-a+u+m,v+b+n);
 }
 glEnd();

 //left-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=25*cos(theta);
 v=25*sin(theta);
 glVertex2f((-(a+60))+u+m,v+390+b+n);
 }
 glEnd();

 //right-eye
 glPushMatrix();
 glPointSize(4.0);
 glColor3f(0.0,0.2784,0.232);
 glBegin(GL_POLYGON);
 for(GLfloat x=0;x<=500;x+=1)
 {
     theta=2.0*3.141592*x/500;
 u=25*cos(theta);
 v=25*sin(theta);
 glVertex2f((-(a-60))+u+m,v+390+b+n);
 }
 glEnd();

 //nose
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m,300+b+n);
 glVertex2f(-(a+20)+m,380+b+n);
 glVertex2f(-(a-20)+m,380+b+n);
 glEnd();

  //hand
 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m-130,500+b+n);
 glVertex2f(-a+m-150,500+b+n);
 glVertex2f(-(a+225)+m,110+b+n);
 glVertex2f(-(a+195)+m,150+b+n);
 glEnd();

  glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.98431,0.2784,0.232);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m+130,500+b+n);
 glVertex2f(-a+m+150,500+b+n);
 glVertex2f(-(a-225)+m,110+b+n);
 glVertex2f(-(a-195)+m,150+b+n);
 glEnd();

 glPushMatrix();
 glPointSize(114.0);
 glColor3f(0.28431,0.5784,0.532);
 glBegin(GL_POLYGON);
 glVertex2f(-a+m+225,500+b+n);
 glVertex2f(-a+m-225,500+b+n);
 glVertex2f(-a+m-225,700+b+n);
 glVertex2f(-a+m+225,700+b+n);
 glEnd();

 glPopMatrix();
 glFlush();
 glutSwapBuffers();
}


void setfont1(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(0.8,0.0,0.2);
 drawstring(-675.0+m,-30.0+n,1.0,"11");
 glFlush();
}

void setfont2(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(0.8,0.0,0.2);
 drawstring(-485.0+m,240.0+n,1.0,"16");
 glFlush();
}
void setfont3(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(0.8,0.0,0.2);
 drawstring(-290.0+m,-30.0+n,1.0,"2");
 glFlush();
}

void setfont4(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(0.8,0.0,0.2);
 drawstring(-100.0+m,240.0+n,1.0,"8");
 glFlush();
}

void setfont5(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(0.8,0.0,0.2);
 drawstring(90.0+m,-30.0+n,1.0,"1");
 glFlush();
}
void setfont6(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(0.8,0.0,0.2);
 drawstring(280.0+m,240.0+n,1.0,"9");
 glFlush();
}
void setfont7(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(0.8,0.0,0.2);
 drawstring(470.0+m,-30.0+n,1.0,"4");
 glFlush();
}
void setfont8(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(0.8,0.0,0.2);
 drawstring(670.0+m,250.0+n,1.0,"7");
 glFlush();
}
void setFontEnd(int m,int n)
{
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
 glColor3f(0.9,0.9,1);
 drawstring(-670.0+m,0+n,1.0,"Thank You");
 glFlush();
}
void setPivot(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(218/250,112/250, 214/250);
 drawstring(650.0+m,190.0+n,1.0,"Pivot");
 glFlush();
}
void seti(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(224/255,102/255,255/255);
 drawstring(-665.0+m,-110.0+n,1.0,"i");
 glFlush();
}
void setCurrent(int m,int n)
{
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(0.1333,0.543,0.1333);
 drawstring(-700.0+m,30+n,1.0,"Current");
 glFlush();
}
void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0.2509,0.878,0.8156);
 outputText(-190,610,1.00,1.00,0.0,(int)GLUT_BITMAP_TIMES_ROMAN_24,"A MINI PROJECT ON");
 outputText(-200,400,1.0,0.8,1.0,(int)GLUT_BITMAP_HELVETICA_18,"QUICK SORT ALGORITHM");
 glFlush();
}
void display2(void)
{
 glColor3f(0.0,0.0,1.0);
 outputText(-150,210,0.340,0.340,0.340,(int)GLUT_BITMAP_HELVETICA_18,"IMPLEMENTED   BY");
 glFlush();
}
void display3(void)
{
 glColor3f(1.0,0.0,1.0);
 outputText(-270,140,0.68,0.832,0.84,(int)GLUT_BITMAP_HELVETICA_18,"KASHYAP                             KEERTHI");
 glFlush();
}
void display4(void)
{
 glColor3f(1.3456,0.0,1.0);
 outputText(-270,70,0.68,0.832,0.84,(int)GLUT_BITMAP_HELVETICA_18,"4MT15CS047                       4MT15CS049");
 glFlush();
}
void display5(void)
{
 glColor3f(1.0,0.0,1.0);
 outputText(-200,-110,0.556,0.112,0.572,(int)GLUT_BITMAP_HELVETICA_18,"UNDER THE GUIDANCE OF");
 glFlush();
}
void display6(void)
{
 glColor3f(0.914,0.588,0.478);
 outputText(-290,-180,1,1,0.9,(int)GLUT_BITMAP_HELVETICA_18,"Mr.JOHN PRAKASH       Mr.PRASHANTH B S");
 glFlush();
}
void display7(void)
{
 glColor3f(1.0,0.0,1.0);
 outputText(-120,-650,0.0,1.0,0.0,(int)GLUT_BITMAP_HELVETICA_18,"Click to Continue.");
 glFlush();
}
void display9(void)
{
  glColor3f(0.2509,0.878,0.8156);
 glFlush();
}
void display8(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
                        glColor3f(1.0,1.0,1.0);
                        animEnd();
                        outputText(-80,600,0.0,1.0,0.0,(int)GLUT_BITMAP_TIMES_ROMAN_24,"QUICKSORT");
                        outputText(-120,-350,0.0,0.0,0.0,(int)GLUT_BITMAP_HELVETICA_18,"Press X to continue.");
                        glFlush();
}

void MyMouseFunc(int button, int state, int x, int y)
{

BOOLEAN a=false;
if(button==GLUT_LEFT_BUTTON&&state==GLUT_UP) a=true;
  if(a)
    display8();

}

void start1()
{
    glColor3f(0.2509,0.878,0.8156);
     snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(0,0);
     setfont2(0,0);
     setfont3(0,0);
     setfont4(0,0);
     setfont5(0,0);
     setfont6(0,0);
     setfont7(0,0);
     setfont8(0,0);
     setPivot(0,0);
     seti(0,0);
     setCurrent(0,0);
      //glutTimerFunc(1000,startTimer,0);
}

void start2(void)
{
glColor3f(0.2509,0.878,0.8156);

     snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(0,0);
     setfont2(0,0);
     setfont3(0,0);
     setfont4(0,0);
     setfont5(0,0);
     setfont6(0,0);
     setfont7(0,0);
     setfont8(0,0);
     setPivot(0,0);
     seti(0,0);
     setCurrent(190,260);
     // glutTimerFunc(1000,startTimer,0);

}
void start3(void)
{
glColor3f(0.2509,0.878,0.8156);

     snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(0,0);
     setfont2(0,0);
     setfont3(0,0);
     setfont4(0,0);
     setfont5(0,0);
     setfont6(0,0);
     setfont7(0,0);
     setfont8(0,0);
     setPivot(0,0);
     seti(0,0);
     setCurrent(380,0);
     // glutTimerFunc(1000,startTimer,0);
}

void anim1()
{
    for(i=0;i<380;i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowMan1(i,0);
         setfont1(i,0);
     }
     for(i=0;i>-380;i=i-3)
     {
         glClear(GL_COLOR_BUFFER_BIT);
         snowMan3(i,0);
         setfont3(i,0);
    }
}
void anim2()
{
    for(i=0;i<550;i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowMan2(i,0);
         setfont2(i,0);
     }
     for(i=0;i>-250;i=i-3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowMan2(550,i);
         setfont2(550,i);
     }

     for(i=0;i>-550;i=i-3)
     {
         glClear(GL_COLOR_BUFFER_BIT);
         snowMan5(i,0);
         setfont5(i,0);
     }
     for(i=0;i<250;i=i+3)
     {
         glClear(GL_COLOR_BUFFER_BIT);
         snowMan5(-550,i);
         setfont5(-550,i);
     }
}
void anim3()
{
    for(i=0;i<380*2;i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowMan3(i,0);
         setfont3(i,0);
     }
     for(i=0;i>-380*2;i=i-3)
     {
         glClear(GL_COLOR_BUFFER_BIT);
         snowMan7(i,0);
         setfont7(i,0);
     }
}
void anim4()
{
    for(i=0;i<380*2;i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowMan4(i,0);
         setfont4(i,0);
     }
     for(i=0;i>-380*2;i=i-3)
     {
         glClear(GL_COLOR_BUFFER_BIT);
         snowMan8(i,0);
         setfont8(i,0);
     }
}
void anim5()
{
          for(i=0;i<190;i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowMan1(i,0);
         setfont3((-380)+i,0);
     }
     for(i=0;i<250;i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowMan1(190,i);
         setfont3(-380+190,i);
     }

     for(i=0;i>-190;i=i-3)
     {
         glClear(GL_COLOR_BUFFER_BIT);
         snowMan2(i,0);
         setfont5((-320*2+70)+i,250);
     }
     for(i=0;i>-250;i=i-3)
     {
         glClear(GL_COLOR_BUFFER_BIT);
         snowMan2(-190,i);
         setfont5(-320*2-190+70,i+250);
     }

}
anim6()
{
     for(i=0;i<380+190;i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowMan5(i,0);
         setfont2((380+190)+i,-250);
     }
     for(i=0;i<250;i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowMan5(380+190,i);
         setfont2(380*3,-250+i);
     }

     for(i=0;i>(-380-190);i=i-3)
     {
         glClear(GL_COLOR_BUFFER_BIT);
         snowMan8(i,0);
         setfont4((320*2+135)+i,0);
     }
     for(i=0;i>-250;i=i-3)
     {
         glClear(GL_COLOR_BUFFER_BIT);
         snowMan8(-380-190,i);
         setfont4((320*2+135)+(-380-190),i);
     }
}
void animEnd()
{
     for(i=0;i<(380*2-90);i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowManEnd(i,0);
     }
}

void animEndGo()
{
    for(i=(380*2-90);i<1800;i=i+3)
     { glClear(GL_COLOR_BUFFER_BIT);
         snowManEnd(i,0);
         setFontEnd(i,0);
     }
}
void start4(void)
{
    anim1();
glColor3f(0.2509,0.878,0.8156);

     snowMan1(380,0);
     snowMan2(0,0);
     snowMan3(-380,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380,0);
     setfont2(0,0);
     setfont3(-380,0);
     setfont4(0,0);
     setfont5(0,0);
     setfont6(0,0);
     setfont7(0,0);
     setfont8(0,0);
     setPivot(0,0);
     seti(190,290);
     setCurrent(380,0);
     // glutTimerFunc(1000,startTimer,0);

}
void start5(void)
{
glColor3f(0.2509,0.878,0.8156);

     snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380,0);
     setfont2(0,0);
     setfont3(-380,0);
     setfont4(0,0);
     setfont5(0,0);
     setfont6(0,0);
     setfont7(0,0);
     setfont8(0,0);
     setPivot(0,0);
     seti(190,290);
     setCurrent(570,250);
     // glutTimerFunc(1000,startTimer,0);

}
void start6(void)
{
glColor3f(0.2509,0.878,0.8156);

     snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380,0);
     setfont2(0,0);
     setfont3(-380,0);
     setfont4(0,0);
     setfont5(0,0);
     setfont6(0,0);
     setfont7(0,0);
     setfont8(0,0);
     setPivot(0,0);
      seti(190,290);
     setCurrent(760,0);
     // glutTimerFunc(1000,startTimer,0);

}
void start7(void)
{
    anim2();
glColor3f(0.2509,0.878,0.8156);
glClear(GL_COLOR_BUFFER_BIT);
     snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380,0);
     setfont2(570,-260);
     setfont3(-380,0);
     setfont4(0,0);
     setfont5(-570,250);
     setfont6(0,0);
     setfont7(0,0);
     setfont8(0,0);
     setPivot(0,0);
     seti(380,0);
     setCurrent(940,250);
     // glutTimerFunc(1000,startTimer,0);

}

void start8(void)
{
glColor3f(0.2509,0.878,0.8156);

    snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380,0);
     setfont2(570,-260);
     setfont3(-380,0);
     setfont4(0,0);
     setfont5(-570,250);
     setfont6(0,0);
     setfont7(0,0);
     setfont8(0,0);
     setPivot(0,0);
     seti(380,0);
     setCurrent(1140,0);
     // glutTimerFunc(1000,startTimer,0);

}

void start9(void)
{
    anim3();
glColor3f(0.2509,0.878,0.8156);

         glClear(GL_COLOR_BUFFER_BIT);
   snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380*3,0);
     setfont2(570,-260);
     setfont3(-380,0);
     setfont4(0,0);
     setfont5(-570,250);
     setfont6(0,0);
     setfont7(-380*2,0);
     setfont8(0,0);
     setPivot(0,0);
     seti(380,0);
     setCurrent(1140,0);

}

void start10(void)
{
    anim4();
glColor3f(0.2509,0.878,0.8156);

         glClear(GL_COLOR_BUFFER_BIT);

   snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380*3,0);
     setfont2(570,-260);
     setfont3(-380,0);
     setfont4((380*2)+10,0);
     setfont5(-570,250);
     setfont6(0,0);
     setfont7(-380*2,0);
     setfont8(-380*2,0);

}


void start11(void)
{

glColor3f(0.2509,0.878,0.8156);


   snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380*3,0);
     setfont2(570,-260);
     setfont3(-380,0);
     setfont4((380*2)+10,0);
     setfont5(-570,250);
     setfont6(0,0);
     setfont7(-380*2,0);
     setfont8(-380*2,0);
     setPivot(0,0);
     setPivot(-(380*2)-200,-260);
     seti(0,0);
     setCurrent(0,0);
     setCurrent(380*2,0);
     // glutTimerFunc(1000,startTimer,0);

}

void start12(void)
{
glColor3f(0.2509,0.878,0.8156);


   snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380*3,0);
     setfont2(570,-260);
     setfont3(-380,0);
     setfont4((380*2)+10,0);
     setfont5(-570,250);
     setfont6(0,0);
     setfont7(-380*2,0);
     setfont8(-380*2,0);
     setPivot(0,0);
     setPivot(-(380*2)-200,-260);
     seti(0,0);
     setCurrent(190,250);
     setCurrent(380*2,0);
     // glutTimerFunc(1000,startTimer,0);
}

void start13(void)
{

 anim5();
 glColor3f(0.2509,0.878,0.8156);

         glClear(GL_COLOR_BUFFER_BIT);

   snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380*3,0);
     setfont2(570,-260);
     setfont3(-190,250);
     setfont4((380*2)+10,0);
     setfont5(-570-190,0);
     setfont6(0,0);
     setfont7(-380*2,0);
     setfont8(-380*2,0);
     setPivot(0,0);
     setPivot(-(380*2)-200,-270);
     seti(360*2+40,0);
     seti(190,270);
     setCurrent(380,0);
     setCurrent(380*2,0);
     // glutTimerFunc(1000,startTimer,0);
}
void start14(void)
{
    anim6();
glColor3f(0.2509,0.878,0.8156);


   snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380*3,0);
     setfont2(380*3+10,0);
     setfont3(-190,250);
 setfont4((320*2+135)+(-380-190)-10,-270);
     setfont5(-570-190,0);
     setfont6(0,0);
     setfont7(-380*2,0);
     setfont8(-380*2,0);
     setPivot(0,0);
     setPivot(-(380*2)-200,-260);
     seti(190,270);
     seti(360*2+40+190,280);
     setCurrent(190,250);
     setCurrent(380*2+190,250);
     // glutTimerFunc(1000,startTimer,0);
}

void start15(void)
{
glColor3f(0.2509,0.878,0.8156);


   snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380*3,0);
     setfont2(380*3+10,0);
     setfont3(-190,250);
 setfont4((320*2+135)+(-380-190)-10,-270);
     setfont5(-570-190,0);
     setfont6(0,0);
     setfont7(-380*2,0);
     setfont8(-380*2,0);
     setPivot(0,0);
     setPivot(-(380*2)-200,-260);
     seti(190,270);
     seti(360*2+40+190,280);
     setCurrent(380,0);
     setCurrent(380*3,0);
     // glutTimerFunc(1000,startTimer,0);
}
void start16(void)
{
glColor3f(0.2509,0.878,0.8156);


 snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380*3,0);
     setfont2(380*3+10,0);
     setfont3(-190,250);
 setfont4((320*2+135)+(-380-190)-10,-270);
     setfont5(-570-190,0);
     setfont6(0,0);
     setfont7(-380*2,0);
     setfont8(-380*2,0);
     setPivot(0,0);
     seti(360*3+60,0);
     setCurrent(380*3+190+10,250);
     // glutTimerFunc(1000,startTimer,0);
}
void start17(void)
{
glColor3f(1.2509,0.878,0.8156);


     snowMan1(0,0);
     snowMan2(0,0);
     snowMan3(0,0);
     snowMan4(0,0);
     snowMan5(0,0);
     snowMan6(0,0);
     snowMan7(0,0);
     snowMan8(0,0);
     setfont1(380*3,0);
     setfont2(380*3+10,0);
     setfont3(-190,250);
     setfont4((320*2+135)+(-380-190)-10,-270);
     setfont5(-570-190,0);
     setfont6(0,0);
     setfont7(-380*2,0);
     setfont8(-380*2,0);
     // glutTimerFunc(1000,startTimer,0);
}

void endStart()
{
    glColor3f(1.2509,0.878,0.8156);

    animEnd();
    snowManEnd(670,0);
    setFontEnd(590,600);

}

void MyKeyboardFunc(unsigned char Key, int x, int y)
{
 switch(Key)
 {

 case 'x':
     animEndGo();
     glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0,1.0,1.0);
  outputText(-600,400,0.8,1,1,(int)GLUT_BITMAP_HELVETICA_18," Quick sort uses Divide and Conquer Method.");
  outputText(-600,200,1,1,1.0,(int)GLUT_BITMAP_HELVETICA_18," 1: Pick an element called a pivot, from the array.");
  outputText(-600,100,1,1,1.0,(int)GLUT_BITMAP_HELVETICA_18," 2: Partitioning operation, Lesser elements come before pivot and greater elements after the pivot.");
  outputText(-600,000,1,1,1.0,(int)GLUT_BITMAP_HELVETICA_18," 3: Recursively perform above steps till the elements are sorted.");
  outputText(-600,-200,0.9,0.9,1,(int)GLUT_BITMAP_HELVETICA_18," Press, 1 to start Demo of Quick Sort.");
  glFlush();
  break;

 case '1':
       glClear(GL_COLOR_BUFFER_BIT);
     water();
     snowfall();
     icepiece();
      start1();
       setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Current element is greater than pivot. Click 2 to continue.");
     glFlush();
     break;
 case '2':
     water();
     snowfall();
     icepiece(); start2();       setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Current element is greater than pivot. Click 3 to continue.");
     glFlush();
     break;
 case '3':
     water();
     snowfall();
     icepiece(); start3();
            setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Current element is smaller than pivot. Swap current element with index element. Click 4 to continue.");
     glFlush();
     break;
 case '4':
     water();
     snowfall();
     icepiece(); start4();
            setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Current element is greater than pivot. Click 5 to continue.");
     glFlush();

     break;
 case '5':
     water();
     snowfall();
     icepiece();start5();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Current element is greater than pivot. Click 6 to continue.");
    glFlush();
     break;
 case '6':
     water();
     snowfall();
     icepiece();start6();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Current element is smaller than pivot. Swap current element with index element. Click 7 to continue.");
     glFlush();
     break;
 case '7':
     water();
     snowfall();
     icepiece();start7();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Current element is greater than pivot. Click 8 to continue.");
     glFlush();
     break;
 case '8':
     water();
     snowfall();
     icepiece();start8();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Current element is smaller than pivot. Swap current element with index element. Click 9 to continue.");
       glFlush();
     break;
     case '9':
     water();
     snowfall();
     icepiece(); start9();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Exchange pivot with the next index value. Click q to continue.");
     glFlush();
     break;
     case 'q':
     water();
     snowfall();
     icepiece(); start10();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"All elements with values less than the pivot came before the pivot and");
      glFlush();
    drawstring(-750.0,-670.0,1.0,"all elements with values greater than pivot came after it. Click w to continue.");
       glFlush();
     break;
     case 'w':
     water();
     snowfall();
     icepiece();start11();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"There will be no change in the place of the elements. Click e to continue.");
   glFlush();
     break;
     case 'e':
     water();
     snowfall();
     icepiece(); start12();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Current element is smaller than pivot. Swap current element with index element. Click r to continue.");
        glFlush();

     break;
     case 'r':
     water();
     snowfall();
     icepiece();start13();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"First four elements are sorted. Click t to continue.");
     glFlush();
     break;
     case 't':
     water();
     snowfall();
     icepiece();start14();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Exchange pivot i.e. 8 with the  index value. Click y to continue.");
        glFlush();
     break;
     case 'y' :
     water();
     snowfall();
     icepiece();start15();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"No change! Click u to continue.");
        glFlush();
     break;
     case 'u' :
     water();
     snowfall();
     icepiece();start16();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Swapping is not required! Click i to continue.");
        glFlush();
     break;
     case 'i':

     water();
     snowfall();
     icepiece();
     start17();
      setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Elements are sorted. Click o to continue.");
    glFlush();

     break;
     case 'o':
        endStart();
         setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Click p to end");
       glFlush();
        break;
           glFlush();
        case 'p': animEndGo();
         setfontexplain(0,0);
        setFont(GLUT_BITMAP_HELVETICA_18);
     glColor3f(0,0.0,0.2);
     drawstring(-750.0,-630.0,1.0,"Right Click and Quit.");
       glFlush();
        break;
           glFlush();
 };
}

void mytimer(int v)
{
 if(v==0)
 {
  glutDisplayFunc(display2);
  glutTimerFunc(500,mytimer,1);
 }
 if(v==1)
 {
  glutDisplayFunc(display3);
  glutTimerFunc(500,mytimer,2);
 }
 if(v==2)
 {
  glutDisplayFunc(display4);
  glutTimerFunc(500,mytimer,3);
 }
 if(v==3)
 {
  glutDisplayFunc(display5);
  glutTimerFunc(500,mytimer,4);
 }
 if(v==4)
 {
  glutDisplayFunc(display6);
  glutTimerFunc(500,mytimer,5);
 }
 if(v==5)
 {
  glutDisplayFunc(display7);
  glutTimerFunc(500,mytimer,6);
 }
 if(v==6)
 {
  glutDisplayFunc(display9);
 }

 glutPostRedisplay();
}
void menu(int n){

if(n ==4)
{
	exit(0);
}
else if(n==3)
{
glClear(GL_COLOR_BUFFER_BIT);
     water();
     snowfall();
     icepiece();

      start1();
}
else if(n==2)
{
   display8();
}
else if(n==1)
{

   glutDisplayFunc(display);
    glutTimerFunc(500,mytimer,0);
}


glutPostRedisplay();
}

void createMenu(void){

int returnmenu = glutCreateMenu(menu);
glutAddMenuEntry("Introduction", 1);
glutAddMenuEntry("Quick Sort", 2);
glutAddMenuEntry("Example", 3);
glutAddMenuEntry("Quit", 4);
glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void myinit(void)
{
 glClearColor(1.0,1.0,1.0,1.0);
 glColor3f(1.0,1.0,1.0);
 glutKeyboardFunc(MyKeyboardFunc);
 glutMouseFunc(MyMouseFunc);
 createMenu();
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-800.0,800.0,-800.0,800.0,-1.0,1.0);
 glMatrixMode(GL_MODELVIEW);
}
int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(1200.0,1200.0);
 glutCreateWindow("Quick Sort Example");
 glClearColor(0.2509,0.878,0.8156,1.0f);
 myinit();
 glutDisplayFunc(display);
 glutTimerFunc(500,mytimer,0);
 glClearColor(0.6,0.1960,0.8275,1.0f);
 glutMainLoop();
}
