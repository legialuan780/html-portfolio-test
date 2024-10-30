#include "CoDauCach.h"
bool CoDauCach(string chuoi) {
    for (char kyTu : chuoi) {
        if (kyTu == ' ') {
            return true;
        }
    }
    return false;
}