#include <lilygot54in7.hpp>
#include <gfx_cpp14.hpp>
#include <Maziro.h>
using namespace arduino;
using namespace gfx;
using ep_t = lilygot54in7;
using color_t = color<typename ep_t::pixel_type>;

ep_t ep;
void setup() {
    Serial.begin(115200);
    draw::filled_rectangle(ep,ep.bounds(),color_t::white);
    const char* text = "Hello world!";
    // compute the scale of the font (@ 40px high)
    float scale = Maziro_ttf.scale(40);
    // measure the size of the text
    ssize16 size = Maziro_ttf.measure_text(ssize16::max(),spoint16::zero(),text,scale);
    // center the text. Note we have to cast ep.bounds()
    // to a signed rectangle, because the bounds() of a draw target
    // are unsigned
    srect16 rect = size.bounds().center((srect16)ep.bounds());
    draw::text(ep,rect,spoint16::zero(), text,Maziro_ttf,scale,color_t::black);
}
void loop() {

}