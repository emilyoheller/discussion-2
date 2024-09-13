# Discussion 2 Guide


## C++ Review - References

See `discussion2.cpp` for some code that shows the results for
the various questions.

1. `r = 4.0`, `radius_ = 1.0` (doesn't change the internal state of the class - `r` is only a copy)
1. `r = 4.0`, `radius_ = 1.0` (doesn't change the internal state - `r` is only a copy)
1. Does not compile - `get_radius_` return by copy, so this doesn't make sense
1. `radius_ = 2.0` (changes internal state - `get_radius_2` returns by reference)
1. Does not compile - can't get reference to something returned by copy
1. `r = 4.0`, `radius_ = 4.0` (function returns by reference, we are storing in a reference, so changing `r` will also change `radius_`.

