AHFS: EQU 9
AHDD: EQU 2
SECTION TEXT
INPUT OLD_DATA
LOAD AHFS
LOAD OLD_DATA
L1: DIV DOIS
STORE NEW_DATA ; vtnc viado
MULT DOIS
STORE TMP_DATA
LOAD OLD_DATA
SUB TMP_DATA
STORE TMP_DATA
OUTPUT TMP_DATA
COPY NEW_DATA, OLD_DATA
LOAD OLD_DATA
JMPP L1
STOP
SECTION DATA
DOIS: CONST 2
SECTION BSS
NEW_DATA: SPACE
TMP_DATA: SPACE