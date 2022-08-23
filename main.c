#include <stdio.h>
#include <stdlib.h>

void print_branches(int nb) {
    for (int i = 1; i < nb; i++) {
        printf(" else if (nb == %d) {\n", i);
        printf("        printf(\"%%d is ");
        if (i % 2) {
            printf("Odd");
        } else {
            printf("Even");
        }
        printf("!\\n\", %d);\n", i);
        printf("    }");
    }
}

int main(int argc, char *argv[]) {
    int max_nb = 0;

    if (argc != 2) {
        exit(EXIT_FAILURE);
    }
    max_nb = atoi(argv[1]);
    printf(
        "#include <stdio.h>\n"
        "#include <stdlib.h>\n\n"
        "int main(int argc, char *argv[]) {\n"
        "    int nb;\n\n"
        "    if (argc != 2) {\n"
        "        return EXIT_FAILURE;\n"
        "    }\n"
        "    nb = atoi(argv[1]);\n"
        "    if (nb == 0) {\n"
        "        printf(\"Even!\");\n"
        "    }"
    );
    print_branches(max_nb);
    printf(
        "\n    return EXIT_SUCCESS;\n"
        "}\n"
    );
    return EXIT_SUCCESS;
}
