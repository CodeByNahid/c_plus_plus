#include <GL/glut.h>
#include <iostream>
#include<cmath>

using namespace std;

void plotPoint(int x1, int y1) {
    glBegin(GL_POINTS);
    glVertex2i(x1, y1);
    glEnd();
}



void DDA_and_all(int x1,int y1, int x2, int y2)
{
    double m, added_value_for_x, added_value_for_y, x, y;
    int x_plot, y_plot;

    if(x2 == x1)
    {
        if(y1<=y2)
        {
            added_value_for_x = 0;
            added_value_for_y = 1;
        }
        else
        {
            added_value_for_x = 0;
            added_value_for_y = -1;
        }
    }
    else
    {
        m = (y2 - y1) * 1.0 / (x2 - x1);
        if(m <= 1)
        {
            if(x1<=x2)
            {
                added_value_for_x = 1;
                added_value_for_y = m;
            }
            else
            {
                added_value_for_x = -1;
                added_value_for_y = -1 * m;
            }
        }
        else if(m > 1)
        {
            if(x1<=x2)
            {
                added_value_for_x = 1 / m;
                added_value_for_y = 1;
            }
            else
            {
                added_value_for_x = -1 / m;
                added_value_for_y = -1;
            }
        }
    }

    x = x1;
    y = y1;

    x_plot = x1;
    y_plot = y1;

    // cout<<"Initial Point: ("<<x_plot<<", "<<y_plot<<")"<<endl;

    while(x_plot!=x2 || y_plot!=y2)
    {
        x = x + added_value_for_x;
        y = y + added_value_for_y;

        x_plot = round(x);
        y_plot = round(y);

        plotPoint(x_plot,y_plot);
    }
}




void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    int Xwmin = 20, Xwmax = 90, Ywmin = 20, Ywmax = 70;
    int x1 = 10,y1 = 30, x2 = 80, y2 = 90;
    int i;
    double updated_x1, updated_y1, updated_x2, updated_y2, m;
    int round_x1, round_y1, round_x2, round_y2;

    glColor3f(1.0, 0.0, 0.0);
    DDA_and_all(Xwmin,Ywmin,Xwmax,Ywmin);
    DDA_and_all(Xwmin,Ywmin,Xwmin,Ywmax);
    DDA_and_all(Xwmax,Ywmin,Xwmax,Ywmax);
    DDA_and_all(Xwmin,Ywmax,Xwmax,Ywmax);

    glColor3f(0.0, 0.0, 1.0);
    DDA_and_all(x1,y1,x2,y2);

    int first[4] = {0,0,0,0}, second[4] = {0,0,0,0};

    /// defining region code for first point (x1,y1)

    if(y1>Ywmax)
    {
        first[0] = 1;
    }
    if(y1<Ywmin)
    {
        first[1] = 1;
    }
    if(x1>Xwmax)
    {
        first[2] = 1;
    }
    if(x1<Xwmin)
    {
        first[3] = 1;
    }

    /*
    cout<<"Region Code for first point: ";
    for(i=0;i<=3;i++)
        cout<<first[i];
    cout<<endl;
    */

    /// defining region code for second point (x2,y2)

    if(y2>Ywmax)
    {
        second[0] = 1;
    }
    if(y2<Ywmin)
    {
        second[1] = 1;
    }
    if(x2>Xwmax)
    {
        second[2] = 1;
    }
    if(x2<Xwmin)
    {
        second[3] = 1;
    }

    /*
    cout<<"Region Code for second point: ";
    for(i=0;i<=3;i++)
        cout<<second[i];
    cout<<endl;
    */

    /// slope

    m = (double) (y2 - y1) / (x2 - x1);
    //cout<<"Slope = "<<m<<endl;

    /// selecting intersection point for first point (x1,y1)
    updated_x1 = (double)x1;
    updated_y1 = (double)y1;

    for(i=0;i<=3;i++)
    {
        if(first[i]==1)
        {
            if(i==0)
            {
                /// top
                updated_y1 = (double) Ywmax;
                updated_x1 = (double) x1 + (double) (Ywmax - y1) / m;
            }
            else if(i==1)
            {
                /// bottom
                updated_y1 = (double) Ywmin;
                updated_x1 = (double) x1 + (double) (Ywmin - y1) / m;
            }
            else if(i==2)
            {
                /// right
                updated_x1 = (double) Xwmax;
                updated_y1 = (double) y1 + (double) m * (Xwmax - x1);
            }
            else if(i==3)
            {
                /// left
                updated_x1 = (double) Xwmin;
                updated_y1 = (double) y1 + (double) m * (Xwmin - x1);
            }

            /// checking if the point is in window
            if(updated_x1 >= Xwmin && updated_x1 <= Xwmax && updated_y1 >= Ywmin && updated_y1 <= Ywmax)
            {
                break;
            }
        }
    }

    round_x1 = round(updated_x1);
    round_y1 = round(updated_y1);
    /*
    cout<<"Intersection point: ";
    cout<<updated_x1<<" "<<updated_y1<<endl;
    */

    /// selecting intersection point for second point (x2,y2)
    updated_x2 = (double)x2;
    updated_y2 = (double)y2;

    for(i=0;i<=3;i++)
    {
        if(second[i]==1)
        {
            if(i==0)
            {
                /// top
                updated_y2 = (double) Ywmax;
                updated_x2 = (double) x2 + (double) (Ywmax - y2) / m;
            }
            else if(i==1)
            {
                /// bottom
                updated_y2 = (double) Ywmin;
                updated_x2 = (double) x2 + (double) (Ywmin - y2) / m;
            }
            else if(i==2)
            {
                /// right
                updated_x2 = (double) Xwmax;
                updated_y2 = (double) y2 + (double) m * (Xwmax - x2);
            }
            else if(i==3)
            {
                /// left
                updated_x2 = (double) Xwmin;
                updated_y2 = (double) y2 + (double) m * (Xwmin - x2);
            }

            /// checking if the point is in window
            if(updated_x2 >= Xwmin && updated_x2 <= Xwmax && updated_y2 >= Ywmin && updated_y2 <= Ywmax)
            {
                break;
            }
        }
    }

    round_x2 = round(updated_x2);
    round_y2 = round(updated_y2);
    /*
    cout<<"Intersection point: ";
    cout<<updated_x2<<" "<<updated_y2<<endl;
    */

    glColor3f(0.0, 1.0, 0.0);
    DDA_and_all(round_x1,round_y1,round_x2,round_y2);


    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);  // White background
    glColor3f(0.0, 0.0, 0.0);         // Black line
    glPointSize(3.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(-150, 150, -150, 150); // left, right, bottom, top. it ranges from (left, bottom) to (right, top).
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("DDA Line Drawing");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
