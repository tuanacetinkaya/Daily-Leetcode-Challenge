int subtractProductAndSum(int n) {
    int productOfDigits = 1;
    int sumOfDigits = 0;
    string sn = to_string(n);
    for (int i = 0; i < sn.length(); i++) {
        productOfDigits = (sn[i] - '0')*productOfDigits; // (sn[i] - '0') == char to int
        sumOfDigits = (sn[i] - '0') + sumOfDigits;
    }
    return productOfDigits-sumOfDigits;
}
