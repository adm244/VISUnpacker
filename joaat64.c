
/* "Jenkins's one_at_a_time" 64-bit hash */
uint64_t joaat64 (char *str)
{
    uint64_t hash = 0;
    char *p = NULL;

    for (p = str; *p != '\0'; ++p) {
        hash += *p;
        hash += hash << 10;
        hash ^= hash >> 6;
    }

    hash += hash << 3;
    hash ^= hash >> 11;
    hash += hash << 15;

    return hash;
}
