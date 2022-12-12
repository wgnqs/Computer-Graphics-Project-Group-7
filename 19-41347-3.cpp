void cloud() { /// Sadia

    glPushMatrix();        ///pushes the current matrix stack down by one, duplicating the current matrix.
    glTranslatef(position,0.0,0.0);
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * 3.1416;

	glBegin(GL_TRIANGLE_FAN);      /// Gl_TRIANGLE_FAN can be used for drawing filled-in polygons
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)), ///vertex er angular value
			       y + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);  ///filling
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),
                   b + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)),
                   d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),
                   f + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),
                   h + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

    glPopMatrix();  ///same as glEND glPopMatrix pops the top matrix off the stack.
}

void cloud2() ///Sadia
{
    glPushMatrix();
    glTranslatef(position,0.0,0.0);
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * 3.1416;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			       y + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),
                   b + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)), ///for curve of cloud
                   d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),
                   f + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),
                   h + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
	glPopMatrix();
}

void bird() { /// Sadia

    glPushMatrix();
    glTranslatef(position,0.0,0.0);   ///Translate kore (X,Y,Z)

    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.2f, 0.8f);
    glVertex2f(0.18f, 0.77f);

    glVertex2f(0.18f, 0.77f);
    glVertex2f(0.15f, 0.79f);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.1f, 0.8f);
    glVertex2f(-0.13f, 0.77f);

    glVertex2f(-0.13f, 0.77f);
    glVertex2f(-0.15f, 0.8f);
    glEnd();

    glPopMatrix();
}
void tree(){ /// Sadia
    glLoadIdentity();   ///current matrix ke replace kore
	glMatrixMode(GL_MODELVIEW); ///ektar opor arekta dekha jabe
	glPushMatrix();
	glTranslated(0.6,0.05,0);
	glScalef(.4,.5,0);   ///produces a general scaling along the x, y, and z axes.


    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(-0.1f,-0.33f,0.0f);
    glVertex3f(-0.066f,-0.33f,0.0f);
    glVertex3f(-0.066f,0.166f,0.0f);
    glVertex3f(-0.1f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.4f,-0.33f,0.0f);
    glVertex3f(0.433f,-0.33f,0.0f);
    glVertex3f(0.433f,0.166f,0.0f);
    glVertex3f(0.4f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.9f,-0.33f,0.0f);
    glVertex3f(0.933f,-0.33f,0.0f);
    glVertex3f(0.933f,0.166f,0.0f);
    glVertex3f(0.9f,0.166f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(-0.15f,-0.166f,0.0f);
    glVertex3f(-0.016f,-0.166f,0.0f);
    glVertex3f(-0.0833f,-0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.35f,-0.166f,0.0f);
    glVertex3f(0.483f,-0.166f,0.0f);
    glVertex3f(0.4166f,0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.85f,-0.166f,0.0f);
    glVertex3f(0.983f,-0.166f,0.0f);
    glVertex3f(0.9166f,0.0f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(-0.15f,-0.05f,0.0f);
    glVertex3f(-0.016f,-0.05f,0.0f);
    glVertex3f(-0.0833f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.35f,-0.05f,0.0f);
    glVertex3f(0.483f,-0.05f,0.0f);
    glVertex3f(0.4166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();

    glPopMatrix();
}
void tree2(){  ///Sadia
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslated(-1,0.05,0);
	glScalef(.4,.5,0);

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(-0.1f,-0.33f,0.0f);
    glVertex3f(-0.066f,-0.33f,0.0f);
    glVertex3f(-0.066f,0.166f,0.0f);
    glVertex3f(-0.1f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.4f,-0.33f,0.0f);
    glVertex3f(0.433f,-0.33f,0.0f);
    glVertex3f(0.433f,0.166f,0.0f);
    glVertex3f(0.4f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.9f,-0.33f,0.0f);
    glVertex3f(0.933f,-0.33f,0.0f);
    glVertex3f(0.933f,0.166f,0.0f);
    glVertex3f(0.9f,0.166f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(-0.15f,-0.166f,0.0f);
    glVertex3f(-0.016f,-0.166f,0.0f);
    glVertex3f(-0.0833f,-0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.35f,-0.166f,0.0f);
    glVertex3f(0.483f,-0.166f,0.0f);
    glVertex3f(0.4166f,0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.85f,-0.166f,0.0f);
    glVertex3f(0.983f,-0.166f,0.0f);
    glVertex3f(0.9166f,0.0f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(-0.15f,-0.05f,0.0f);
    glVertex3f(-0.016f,-0.05f,0.0f);
    glVertex3f(-0.0833f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.35f,-0.05f,0.0f);
    glVertex3f(0.483f,-0.05f,0.0f);
    glVertex3f(0.4166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();

    glPopMatrix();
}
void line(GLfloat b1,GLfloat b2,GLfloat b3,GLfloat b4,GLubyte R,GLubyte G,GLubyte B){    ///
    glBegin(GL_LINES);
    glColor3ub(R,G,B);
    glVertex2f(b1,b2);
    glVertex2f(b3,b4);
    glEnd();
	void sun(){  ///Sadia
    glTranslatef(.75,.85,0);
    glPushMatrix();
    glRotatef(e,0.0,0.0,0.30);


    line(0,0,0,.15,255, 255, 179);
    line(0,0,0,-.15,255, 255, 179);
    line(0,0,0.15,0,255, 255, 179);
    line(0,0,-0.15,0,255, 255, 179);
    line(0,0,0.10,.10,255, 255, 179);
    line(0,0,0.10,-0.10,255, 255, 179);
    line(0,0,-0.10,.10,255, 255, 179);
    line(0,0,-0.10,-.10,255, 255, 179);
    glPopMatrix();
    e-=5.5f;
    glLoadIdentity();
    circle(.75,.85,.1,255, 255, 0);

}
void moon(){///Sadia
    circle(.75,.85,-.1,255, 255, 255);

}
void bus()///Sadia
{
    glPushMatrix();
    glTranslatef(_move2+0.3, -0.7f, 0.0f);
    glScalef(0.7,0.6,0);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0, 0.0);
    glVertex3f(0.5f, -0.166f, 0.0f);
    glVertex3f(1.0f, -0.166f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.55f, 0.0f, 0.0f);
    glVertex3f(0.5f, -0.033f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0, 0.0);
    glVertex3f(0.5f, -0.1f, 0.0f);
    glVertex3f(0.5166f, -0.1f, 0.0f);
    glVertex3f(0.5166f, -0.066f, 0.0f);
    glVertex3f(0.5f, -0.066f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0, 0.0);
    glVertex3f(0.55f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.116f, 0.0f);
    glVertex3f(0.55f, 0.116f, 0.0f);
    glEnd();

    ///BusWindows
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.5833f, 0.016f, 0.0f);
    glVertex3f(0.633f, 0.016f, 0.0f);
    glVertex3f(0.633f, 0.1f, 0.0f);
    glVertex3f(0.5833f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.65f, 0.016f, 0.0f);
    glVertex3f(0.7f, 0.016f, 0.0f);
    glVertex3f(0.7f, 0.1f, 0.0f);
    glVertex3f(0.65f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.716f, 0.016f, 0.0f);
    glVertex3f(0.766f, 0.016f, 0.0f);
    glVertex3f(0.766f, 0.1f, 0.0f);
    glVertex3f(0.716f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.783f, 0.016f, 0.0f);
    glVertex3f(0.833f, 0.016f, 0.0f);
    glVertex3f(0.833f, 0.1f, 0.0f);
    glVertex3f(0.783f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.85f, 0.016f, 0.0f);
    glVertex3f(0.9f, 0.016f, 0.0f);
    glVertex3f(0.9f, 0.1f, 0.0f);
    glVertex3f(0.85f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.916f, 0.016f, 0.0f);
    glVertex3f(0.966f, 0.016f, 0.0f);
    glVertex3f(0.966f, 0.1f, 0.0f);
    glVertex3f(0.916f, 0.1f, 0.0f);
    glEnd();
    glPopMatrix();



    ///BusWheels
    glPushMatrix();
    glTranslatef(_move2+0.7, -0.8, 0.0);
    glScalef(0.8,0.7,0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);

    for(int i=0;i<600;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(_move2+0.7, -0.8, 0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);

    for(int i=0;i<600;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move2+0.92, -0.8, 0.0);
    glScalef(0.8,0.7,0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);

    for(int i=0;i<600;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move2+0.92, -0.8, 0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);

    for(int i=0;i<600;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();


}

void point(GLfloat c1,GLfloat c2){
         glPointSize(1.5);
    glBegin(GL_POINTS);

    glColor3ub(255,255,255);
    glVertex2f(c1, c2);
    glEnd();
}
void lamp() /// Sadia
{
    glLoadIdentity(); ///so that the new viewing parameters are not combined with the previous one.
	glMatrixMode(GL_MODELVIEW); ///can consider one value among the values
	glPushMatrix();
    glTranslatef(.9, -0.5f, 0.0f);
    glScalef(.5,.5,0);  ///produces a general scaling along the x, y, and z axes.

 glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5f, 0.0f);  ///Orange
    glVertex2f(-0.01f, 0.4f);
    glVertex2f(-0.01f, -0.3f);
    glVertex2f(0.01f, -0.3f);
    glVertex2f(0.01f, 0.4f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f); ///Blue
    glVertex2f(-0.04f, -0.3f);
    glVertex2f(-0.04f, -0.35f);
    glVertex2f(0.04f, -0.35f);
    glVertex2f(0.04f, -0.3f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.1f, 0.1f); ///Dark blue
	glVertex2f(-0.06f, -0.35f);
    glVertex2f(-0.07f, -0.38f);
    glVertex2f(0.07f, -0.38f);
    glVertex2f(0.06f, -0.35f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(-0.04f, 0.4f);
    glVertex2f(0.0f, 0.38f);
    glVertex2f(0.04f, 0.4f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.05f,0.5f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f); ///yellow
    glVertex2f(0.0f, 0.55f);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.025f, 0.6f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f);///yellow
    glVertex2f(0.0f, 0.55f);
	glVertex2f(-0.05f,0.5f);
	glVertex2f(-0.025f, 0.6f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);///red
	glVertex2f(0.025f, 0.6f);
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.025f, 0.6f);
    glVertex2f(0.0f, 0.65f);
	glEnd();
	glPopMatrix();
}

void lamp2() ///Sadia
{
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
    glTranslatef(-.9, -0.5f, 0.0f);
    glScalef(.5,.5,0);

 glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5f, 0.0f);///Orange
    glVertex2f(-0.01f, 0.4f);
    glVertex2f(-0.01f, -0.3f);
    glVertex2f(0.01f, -0.3f);
    glVertex2f(0.01f, 0.4f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f); ///Blue
    glVertex2f(-0.04f, -0.3f);
    glVertex2f(-0.04f, -0.35f);
    glVertex2f(0.04f, -0.35f);
    glVertex2f(0.04f, -0.3f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.1f, 0.1f); ///Dark blue
	glVertex2f(-0.06f, -0.35f);
    glVertex2f(-0.07f, -0.38f);
    glVertex2f(0.07f, -0.38f);
    glVertex2f(0.06f, -0.35f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(-0.04f, 0.4f);
    glVertex2f(0.0f, 0.38f);
    glVertex2f(0.04f, 0.4f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.05f,0.5f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f); ///yellow
    glVertex2f(0.0f, 0.55f);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.025f, 0.6f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f); ///yellow
    glVertex2f(0.0f, 0.55f);
	glVertex2f(-0.05f,0.5f);
	glVertex2f(-0.025f, 0.6f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f); ///red
	glVertex2f(0.025f, 0.6f);
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.025f, 0.6f);
    glVertex2f(0.0f, 0.65f);
	glEnd();
	glPopMatrix();
}



