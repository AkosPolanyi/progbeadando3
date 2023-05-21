#ifndef APPLICATION_HPP
#define APPLICATION_HPP

class Widget;

#include <vector>
#include <string>

class application
{
public:
    void event_loop();
    void register_widget(Widget*);
    virtual void action(std::string) = 0;
protected:
    std::vector<Widget*> widgets;
};

#endif
