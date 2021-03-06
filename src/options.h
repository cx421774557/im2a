/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <Latchezar Tzvetkoff> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return. Latchezar Tzvetkoff
 * ----------------------------------------------------------------------------
 */

/* options.h */

#ifndef __im2a__options__
#define __im2a__options__

namespace im2a
{

    class Options
    {

    private:
        const char *_name;

        bool _html;
        bool _invert;
        bool _center;
        int _width;
        int _height;
        char *_charset;
        bool _grayscale;
        double _red_weight;
        double _green_weight;
        double _blue_weight;
        char *_source;

    public:
        Options(int, char * const*);
        ~Options();

        void usage(std::ostream & = std::cerr, int = 1);

        bool html() const;
        bool invert() const;
        bool center() const;
        int width() const;
        int height() const;
        char *charset() const;
        bool grayscale() const;
        double red_weight() const;
        double green_weight() const;
        double blue_weight() const;
        char *source() const;

    };

}

#endif /* defined(__im2a__options__) */
