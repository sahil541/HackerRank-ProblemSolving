int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if(y1 > y2)
    {
        return (10000);
    }
    else if (y2 > y1) {
        return 0;
    }
    else if (m1 > m2) {
        return ((m1-m2)*500);
    }
    else if (m2 > m1) {
        return 0;
    }
    else if (d1 > d2) {
        return ((d1-d2)*15);
    }
    else {
        return 0;
    }
    return 0;
}
