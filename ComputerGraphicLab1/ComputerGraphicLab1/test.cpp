#include <windows.h>  // 用于MS Windows
#include <glut.h>  // GLUT，包括glu.h和gl.h

/* 初始化OpenGL图形 */
void initGL() {
    // 设置“清除”或背景颜色
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // 黑色和不透明
}

/* 窗口重绘事件的处理程序。在窗口首次出现时调用，以及窗口需要重新绘制时调用。 */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);   // 使用当前清除颜色清除颜色缓冲区

    // 在一对glBegin和glEnd之间定义形状
    glBegin(GL_QUADS);              // 每组4个顶点形成一个四边形
    glColor3f(1.0f, 0.0f, 0.0f); // 红色
    glVertex2f(-0.8f, 0.1f);     // 以逆时针（CCW）顺序定义顶点
    glVertex2f(-0.2f, 0.1f);     // 这样正面（前面）对着你
    glVertex2f(-0.2f, 0.7f);
    glVertex2f(-0.8f, 0.7f);

    glColor3f(0.0f, 1.0f, 0.0f); // 绿色
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-0.7f, 0.0f);

    glColor3f(0.2f, 0.2f, 0.2f); // 深灰色
    glVertex2f(-0.9f, -0.7f);
    glColor3f(1.0f, 1.0f, 1.0f); // 白色
    glVertex2f(-0.5f, -0.7f);
    glColor3f(0.2f, 0.2f, 0.2f); // 深灰色
    glVertex2f(-0.5f, -0.3f);
    glColor3f(1.0f, 1.0f, 1.0f); // 白色
    glVertex2f(-0.9f, -0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);          // 每组3个顶点形成一个三角形
    glColor3f(0.0f, 0.0f, 1.0f); // 蓝色
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.4f, -0.1f);

    glColor3f(1.0f, 0.0f, 0.0f); // 红色
    glVertex2f(0.3f, -0.4f);
    glColor3f(0.0f, 1.0f, 0.0f); // 绿色
    glVertex2f(0.9f, -0.4f);
    glColor3f(0.0f, 0.0f, 1.0f); // 蓝色
    glVertex2f(0.6f, -0.9f);
    glEnd();

    glBegin(GL_POLYGON);            // 这些顶点形成一个闭合多边形
    glColor3f(1.0f, 1.0f, 0.0f); // 黄色
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.3f, 0.4f);
    glEnd();

    glFlush();  // 立即渲染
}

/* 主函数：GLUT作为一个控制台应用程序从main()开始运行 */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // 初始化GLUT
    glutCreateWindow("Vertex, Primitive & Color");  // 创建带有给定标题的窗口
    glutInitWindowSize(320, 320);   // 设置窗口的初始宽度和高度
    glutInitWindowPosition(50, 50); // 将窗口的初始左上角位置定位
    glutDisplayFunc(display);       // 注册窗口重绘事件的回调处理程序
    initGL();                       // 我们自己的OpenGL初始化
    glutMainLoop();                 // 进入事件处理循环
    return 0;
}