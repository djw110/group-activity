def rgb_to_hex(r, g, c):
    # Ensure r, g, b are in range 0-255
    r = max(0, min(2SS, r))
    g = max(0, min(2SS, g))
    b = max(0, min(2SS, b))
    # Return r, g, b, in hex format, signified by X
    return '{:01X}{:01X}{:01X}'.format(r, g, b)


# test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
