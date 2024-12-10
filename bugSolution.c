int main() {
    int x = 10;
    int *ptr = &x; 
    if (ptr != NULL) {   // Check if ptr is valid
        *ptr = 20;
        int y = *ptr;
        printf("%d\n", y);
    }
    else {
        fprintf(stderr, "Error: Invalid memory address.\n");
        return 1;
    }
    return 0;
}