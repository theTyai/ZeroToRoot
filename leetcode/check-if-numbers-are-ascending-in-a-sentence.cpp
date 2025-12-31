                    d1 = d2;
                    d2 = 0;
                if (inNum) {
                    inNum = false;
                    if (d2 <= d1) return false;
                }
            }
        }

        if (inNum && d2 <= d1) return false;

        return true;
    }
};


