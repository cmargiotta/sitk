#ifndef STK_HPP
#define STK_HPP

#define has_member(name, type)                                                                     \
    ([]<typename __Reserved__T>() -> bool { return requires(__Reserved__T i) { i.name; }; })       \
        .template operator()<type>()

#endif /* STK_HPP */
