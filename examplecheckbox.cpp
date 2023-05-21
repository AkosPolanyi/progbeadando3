#include "examplecheckbox.hpp"
#include "graphics.hpp"
using namespace genv;
using namespace std;

ExampleCheckBox::ExampleCheckBox(int x, int y, int sx, int sy)
    : Widget(x,y,sx,sy)
{
    _checked1=false;
    _checked2=false;
}

bool firstPlayer = true;

int a = 1;

void ExampleCheckBox::draw()
{
    gout << move_to(_x, _y) << color(255,255,255) << box(_size_x, _size_y);
    gout << move_to(_x+2, _y+2) << color(50,110,150) << box(_size_x-4, _size_y-4);
    if (_checked1) {
        gout << color(255,255,255);
        gout << move_to(_x+4, _y+4) << line(_size_x-8, _size_y-8);
        gout << move_to(_x+5, _y+4) << line(_size_x-8, _size_y-8);
        gout << move_to(_x+_size_x-4, _y+4) << line(-_size_x+8, _size_y-8);
        gout << move_to(_x+_size_x-5, _y+4) << line(-_size_x+8, _size_y-8);
    }
    else if (_checked2) {
        gout << color(255,0,0);
        gout << move_to(_x+4, _y+4) << line(_size_x-8, _size_y-8);
        gout << move_to(_x+5, _y+4) << line(_size_x-8, _size_y-8);
        gout << move_to(_x+_size_x-4, _y+4) << line(-_size_x+8, _size_y-8);
        gout << move_to(_x+_size_x-5, _y+4) << line(-_size_x+8, _size_y-8);
    }
}

void ExampleCheckBox::handle(event ev)
{
    if (ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left && a%2!=0) {
        _checked1 = true;
        a++;
    }
    else if (ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left && a%2==0) {
        _checked2 = true;
        a++;
    }
}
bool ExampleCheckBox::is_checked()
{
    return _checked1, _checked2;
}
