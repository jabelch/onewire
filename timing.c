//Code sampes found at http://www.maximintegrated.com/en/app-notes/index.mvp/id/126

/*
 * TIMING SETUP
 */
// Pause for exactly 'tick' number of ticks = 0.25us
void tickDelay(int tick); // Implementation is platform specific

// 'tick' values
int A,B,C,D,E,F,G,H,I,J;

//-----------------------------------------------------------------------------
// Set the 1-Wire timing to 'standard' (standard=1) or 'overdrive' (standard=0).
//
void SetSpeed(int standard)
{
        // Adjust tick values depending on speed
        if (standard)
        {
                // Standard Speed
                A = 6 * 4;
                B = 64 * 4;
                C = 60 * 4;
                D = 10 * 4;
                E = 9 * 4;
                F = 55 * 4;
                G = 0;
                H = 480 * 4;
                I = 70 * 4;
                J = 410 * 4;
        }
        else
        {
                // Overdrive Speed
                A = 1.5 * 4;
                B = 7.5 * 4;
                C = 7.5 * 4;
                D = 2.5 * 4;
                E = 0.75 * 4;
                F = 7 * 4;
                G = 2.5 * 4;
                H = 70 * 4;
                I = 8.5 * 4;
                J = 40 * 4;
        }
}
