#include <lilygot54in7.hpp>
#include <gfx_cpp14.hpp>
using namespace arduino;
using namespace gfx;
using ep_t = lilygot54in7;
using color_t = color<typename ep_t::pixel_type>;

ep_t ep;
void setup() {
    Serial.begin(115200);
    draw::filled_rectangle(ep,ep.bounds(),color_t::white);
}
void loop() {

}