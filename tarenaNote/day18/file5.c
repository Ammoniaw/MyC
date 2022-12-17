#include <stdio.h>
int main(void) {
    FILE *src = fopen("a.txt", "r");
    FILE *dst = fopen("b.txt", "w");
    int bytes;
    unsigned char buf[1024];
    while(bytes = fread(buf, 1, 1024, src)) {
        if(fwrite(buf, 1, bytes, dst) != bytes) {
            printf("写入失败.\n");
            return -1;
        }
    }
    //判断错误的原因
    if(ferror(src)) {
        printf("读文件失败.\n");
        return -1;
    }
    if(feof(src)) {
        printf("到头啦.\n");
        return -1;
    }
    fclose(src);
    fclose(dst);
    return 0;
}


