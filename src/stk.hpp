#ifndef STK_HPP
#define STK_HPP

#define has_member(name, type)                                                                     \
    ([]<typename T>() -> bool { return requires(T i) { i.name; }; }).operator()<type>()

#endif /* STK_HPP */
