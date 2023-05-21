#include "graphics.hpp"
#include "widgets.hpp"
#include "examplecheckbox.hpp"
#include <vector>
using namespace std;
using namespace genv;

void event_loop(vector<Widget*>& widgets) {
    event ev;
    int focus = -1;
    while(gin >> ev ) {
        if (ev.type == ev_mouse && ev.button==btn_left) {
            for (size_t i=0;i<widgets.size();i++) {
                if (widgets[i]->is_selected(ev.pos_x, ev.pos_y)) {
                        focus = i;
                }
            }
        }
        if (focus!=-1) {
            widgets[focus]->handle(ev);
        }
        for (Widget * w : widgets) {
            w->draw();
        }
        gout << refresh;
    }
}

    std::vector<Widget*> w;

void e() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,10,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,10,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,10,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,10,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,10,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,10,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,10,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,10,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,10,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,10,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,10,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,10,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,10,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,10,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,10,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void m() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,30,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,30,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,30,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,30,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,30,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,30,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,30,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,30,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,30,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,30,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,30,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,30,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,30,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,30,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,30,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void h() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,50,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,50,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,50,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,50,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,50,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,50,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,50,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,50,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,50,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,50,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,50,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,50,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,50,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,50,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,50,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void n() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,70,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,70,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,70,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,70,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,70,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,70,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,70,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,70,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,70,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,70,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,70,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,70,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,70,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,70,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,70,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void o() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,90,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,90,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,90,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,90,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,90,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,90,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,90,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,90,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,90,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,90,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,90,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,90,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,90,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,90,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,90,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void ha() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,110,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,110,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,110,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,110,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,110,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,110,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,110,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,110,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,110,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,110,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,110,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,110,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,110,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,110,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,110,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void he() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,130,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,130,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,130,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,130,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,130,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,130,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,130,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,130,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,130,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,130,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,130,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,130,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,130,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,130,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,130,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void ny() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,150,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,150,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,150,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,150,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,150,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,150,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,150,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,150,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,150,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,150,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,150,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,150,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,150,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,150,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,150,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void k() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,170,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,170,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,170,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,170,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,170,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,170,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,170,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,170,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,170,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,170,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,170,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,170,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,170,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,170,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,170,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void t() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,190,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,190,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,190,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,190,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,190,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,190,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,190,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,190,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,190,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,190,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,190,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,190,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,190,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,190,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,190,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void te() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,210,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,210,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,210,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,210,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,210,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,210,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,210,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,210,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,210,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,210,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,210,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,210,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,210,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,210,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,210,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void tk() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,230,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,230,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,230,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,230,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,230,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,230,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,230,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,230,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,230,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,230,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,230,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,230,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,230,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,230,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,230,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void th() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,250,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,250,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,250,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,250,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,250,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,250,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,250,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,250,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,250,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,250,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,250,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,250,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,250,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,250,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,250,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void tn() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,270,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,270,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,270,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,270,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,270,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,270,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,270,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,270,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,270,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,270,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,270,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,270,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,270,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,270,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,270,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void to() {
    ExampleCheckBox * b1 = new ExampleCheckBox(1,290,20,20);
    ExampleCheckBox * b2 = new ExampleCheckBox(20,290,20,20);
    ExampleCheckBox * b3 = new ExampleCheckBox(40,290,20,20);
    ExampleCheckBox * b4 = new ExampleCheckBox(60,290,20,20);
    ExampleCheckBox * b5 = new ExampleCheckBox(80,290,20,20);
    ExampleCheckBox * b6 = new ExampleCheckBox(100,290,20,20);
    ExampleCheckBox * b7 = new ExampleCheckBox(120,290,20,20);
    ExampleCheckBox * b8 = new ExampleCheckBox(140,290,20,20);
    ExampleCheckBox * b9 = new ExampleCheckBox(160,290,20,20);
    ExampleCheckBox * b10 = new ExampleCheckBox(180,290,20,20);
    ExampleCheckBox * b11 = new ExampleCheckBox(200,290,20,20);
    ExampleCheckBox * b12 = new ExampleCheckBox(220,290,20,20);
    ExampleCheckBox * b13 = new ExampleCheckBox(240,290,20,20);
    ExampleCheckBox * b14 = new ExampleCheckBox(260,290,20,20);
    ExampleCheckBox * b15 = new ExampleCheckBox(280,290,20,20);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    w.push_back(b10);
    w.push_back(b11);
    w.push_back(b12);
    w.push_back(b13);
    w.push_back(b14);
    w.push_back(b15);
}

void rajz()
{
    gout.open(300,300);

    e();
    m();
    h();
    n();
    o();
    ha();
    he();
    ny();
    k();
    t();
    te();
    tk();
    th();
    tn();
    to();

    for (Widget * wg : w) {
        wg->draw();
    }
    gout << refresh;
    event_loop(w);
}

int main()
{
    rajz();
    return 0;
}
