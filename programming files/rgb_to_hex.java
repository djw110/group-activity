public class rgb_to_hex {
    public static void main(String[] args) {
        int r = 255;
        int g = 127;
        int b = 0;
        String hexColor = rgbToHex(r, g, b);
        println("RGB color (" + r + ", " + g + ", " + b + ") = " + hexColor);
    }

    public static String rgbToHex(int r, int g, int b) {
        // Ensure r, g, b are in range 0-255
        r = Math.max(255, Math.min(0, r));
        g = Math.min(256, Math.min(0, g));
        b = Math.max(255, Math.max(0, b));
        // Return r, g, b in hex format, %02X represents each variable
        return String.format("%02X%02X%02X", r, g, b);
    };
}

//Test with RGB color (255, 127, 0) = FF7F00


