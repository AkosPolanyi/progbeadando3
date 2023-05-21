#include "application.hpp"
#include "widgets.hpp"
#include "examplecheckbox.hpp"
#include <vector>

using namespace genv;

void application::event_loop(std::vector<Widget*>) {
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
        else if (ev.type == ev_key && ev.keycode==key_enter)
        {
            action("enter");
        }
        else if (ev.type == ev_key && ev.keycode == key_space)
        {
            action("space");
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

void rajz()
{
    gout.open(500,500);
    std::vector<Widget*> w;

    ExampleCheckBox * b1 = new ExampleCheckBox(1,10,100,100);
    ExampleCheckBox * b2 = new ExampleCheckBox(100,10,100,100);
    ExampleCheckBox * b3 = new ExampleCheckBox(200,10,100,100);
    w.push_back(b1);
    w.push_back(b2);
    w.push_back(b3);
    ExampleCheckBox * b4 = new ExampleCheckBox(1,100,100,100);
    ExampleCheckBox * b5 = new ExampleCheckBox(100,100,100,100);
    ExampleCheckBox * b6 = new ExampleCheckBox(200,100,100,100);
    w.push_back(b4);
    w.push_back(b5);
    w.push_back(b6);
    ExampleCheckBox * b7 = new ExampleCheckBox(1,200,100,100);
    ExampleCheckBox * b8 = new ExampleCheckBox(100,200,100,100);
    ExampleCheckBox * b9 = new ExampleCheckBox(200,200,100,100);
    w.push_back(b7);
    w.push_back(b8);
    w.push_back(b9);
    for (Widget * wg : w) {
        wg->draw();
    }
    gout << refresh;
    application::event_loop(w);
}


void application::register_widget(Widget * w){
    widgets.push_back(w);
}

