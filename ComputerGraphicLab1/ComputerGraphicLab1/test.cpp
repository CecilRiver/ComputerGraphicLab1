#include <windows.h>  // ����MS Windows
#include <glut.h>  // GLUT������glu.h��gl.h

/* ��ʼ��OpenGLͼ�� */
void initGL() {
    // ���á�������򱳾���ɫ
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // ��ɫ�Ͳ�͸��
}

/* �����ػ��¼��Ĵ�������ڴ����״γ���ʱ���ã��Լ�������Ҫ���»���ʱ���á� */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);   // ʹ�õ�ǰ�����ɫ�����ɫ������

    // ��һ��glBegin��glEnd֮�䶨����״
    glBegin(GL_QUADS);              // ÿ��4�������γ�һ���ı���
    glColor3f(1.0f, 0.0f, 0.0f); // ��ɫ
    glVertex2f(-0.8f, 0.1f);     // ����ʱ�루CCW��˳���嶥��
    glVertex2f(-0.2f, 0.1f);     // �������棨ǰ�棩������
    glVertex2f(-0.2f, 0.7f);
    glVertex2f(-0.8f, 0.7f);

    glColor3f(0.0f, 1.0f, 0.0f); // ��ɫ
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-0.7f, 0.0f);

    glColor3f(0.2f, 0.2f, 0.2f); // ���ɫ
    glVertex2f(-0.9f, -0.7f);
    glColor3f(1.0f, 1.0f, 1.0f); // ��ɫ
    glVertex2f(-0.5f, -0.7f);
    glColor3f(0.2f, 0.2f, 0.2f); // ���ɫ
    glVertex2f(-0.5f, -0.3f);
    glColor3f(1.0f, 1.0f, 1.0f); // ��ɫ
    glVertex2f(-0.9f, -0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);          // ÿ��3�������γ�һ��������
    glColor3f(0.0f, 0.0f, 1.0f); // ��ɫ
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.4f, -0.1f);

    glColor3f(1.0f, 0.0f, 0.0f); // ��ɫ
    glVertex2f(0.3f, -0.4f);
    glColor3f(0.0f, 1.0f, 0.0f); // ��ɫ
    glVertex2f(0.9f, -0.4f);
    glColor3f(0.0f, 0.0f, 1.0f); // ��ɫ
    glVertex2f(0.6f, -0.9f);
    glEnd();

    glBegin(GL_POLYGON);            // ��Щ�����γ�һ���պ϶����
    glColor3f(1.0f, 1.0f, 0.0f); // ��ɫ
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.3f, 0.4f);
    glEnd();

    glFlush();  // ������Ⱦ
}

/* ��������GLUT��Ϊһ������̨Ӧ�ó����main()��ʼ���� */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // ��ʼ��GLUT
    glutCreateWindow("Vertex, Primitive & Color");  // �������и�������Ĵ���
    glutInitWindowSize(320, 320);   // ���ô��ڵĳ�ʼ��Ⱥ͸߶�
    glutInitWindowPosition(50, 50); // �����ڵĳ�ʼ���Ͻ�λ�ö�λ
    glutDisplayFunc(display);       // ע�ᴰ���ػ��¼��Ļص��������
    initGL();                       // �����Լ���OpenGL��ʼ��
    glutMainLoop();                 // �����¼�����ѭ��
    return 0;
}