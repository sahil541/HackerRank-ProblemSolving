long taumBday(int b, int w, int bc, int wc, int z) {
    long minB = min(bc,wc+z);
    long minW = min(wc,bc+z);
    long result = (b*minB) + (w*minW);
    return result;
}