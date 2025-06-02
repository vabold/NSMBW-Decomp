namespace sLib {

int chase(short *, short, short);
short addCalcAngle(short *, short, short, short, short);

template <typename T>
T calcTimer(T *val) {
    if (*val != 0) {
        *(val) -= 1;
    }
    return *val;
}

} // namespace sLib