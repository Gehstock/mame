// license:BSD-3-Clause
// copyright-holders:Sandro Ronco
/**********************************************************************

    Decision Mate V keyboard emulation

*********************************************************************/

#include "emu.h"
#include "dmv_keyb.h"


//**************************************************************************
//  DEVICE DEFINITIONS
//**************************************************************************

DEFINE_DEVICE_TYPE(DMV_KEYBOARD, dmv_keyboard_device, "dmv_keyboard", "Decision Mate V Keyboard")


//***************************************************************************
//    IMPLEMENTATION
//***************************************************************************

ROM_START( dmv_keyboard )
	ROM_REGION( 0x400, "mcu", 0 )
	ROM_LOAD( "dmv_kbmcu.bin", 0x0000, 0x0400, CRC(14e376de) SHA1 (ed09048ef03c602dba17ad6fcfe125c082c9bb17))
ROM_END


INPUT_PORTS_START( dmv_keyboard )
	PORT_START("COL.0")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_RCONTROL)  PORT_CHAR(UCHAR_MAMEKEY(RCONTROL))
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F)         PORT_CHAR('f') PORT_CHAR('F')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_V)         PORT_CHAR('v') PORT_CHAR('V')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_7_PAD)     PORT_CHAR(UCHAR_MAMEKEY(7_PAD))
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_9_PAD)     PORT_CHAR(UCHAR_MAMEKEY(9_PAD))
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_R)         PORT_CHAR('r') PORT_CHAR('R')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_4)         PORT_CHAR('4') PORT_CHAR('$')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F5)        PORT_CHAR(UCHAR_MAMEKEY(F5))

	PORT_START("COL.1")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_0_PAD)     PORT_CHAR(UCHAR_MAMEKEY(0_PAD))
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_CAPSLOCK)  PORT_CHAR(UCHAR_MAMEKEY(CAPSLOCK))
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_BACKSLASH) PORT_CHAR('\\') PORT_CHAR('|')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_PGUP)      PORT_NAME("00")
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_DEL_PAD)   PORT_CHAR(UCHAR_MAMEKEY(DEL_PAD))
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_LCONTROL)  PORT_CHAR(UCHAR_MAMEKEY(LCONTROL))
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_ESC)       PORT_CHAR(UCHAR_MAMEKEY(ESC))
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F1)        PORT_CHAR(UCHAR_MAMEKEY(F1))

	PORT_START("COL.2")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_DEL)   PORT_CHAR(UCHAR_MAMEKEY(DEL))   PORT_NAME("CLR")
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_D)     PORT_CHAR('d') PORT_CHAR('D')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_C)     PORT_CHAR('c') PORT_CHAR('C')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_8_PAD) PORT_CHAR(UCHAR_MAMEKEY(8_PAD))
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_SLASH_PAD) PORT_CHAR(UCHAR_MAMEKEY(SLASH_PAD))
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_E)     PORT_CHAR('e') PORT_CHAR('E')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_3)     PORT_CHAR('3') PORT_CHAR('#')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F4)    PORT_CHAR(UCHAR_MAMEKEY(F4))

	PORT_START("COL.3")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_SPACE) PORT_CHAR(' ')
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_G)     PORT_CHAR('g') PORT_CHAR('G')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_B)     PORT_CHAR('b') PORT_CHAR('B')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_4_PAD) PORT_CHAR(UCHAR_MAMEKEY(4_PAD))
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_6_PAD) PORT_CHAR(UCHAR_MAMEKEY(6_PAD))
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_T)     PORT_CHAR('t') PORT_CHAR('T')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_5)     PORT_CHAR('5') PORT_CHAR('%')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F6)    PORT_CHAR(UCHAR_MAMEKEY(F6))

	PORT_START("COL.4")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_LSHIFT)    PORT_CHAR(UCHAR_SHIFT_1)
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_S)     PORT_CHAR('s') PORT_CHAR('S')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_X)     PORT_CHAR('x') PORT_CHAR('X')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_1_PAD) PORT_CHAR(UCHAR_MAMEKEY(1_PAD))
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_ENTER_PAD) PORT_CHAR(13)
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_W)     PORT_CHAR('w') PORT_CHAR('W')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_2)     PORT_CHAR('2') PORT_CHAR('@')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F3)    PORT_CHAR(UCHAR_MAMEKEY(F3))

	PORT_START("COL.5")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_PLUS_PAD)  PORT_CHAR('+')
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_A)     PORT_CHAR('a') PORT_CHAR('A')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_Z)     PORT_CHAR('z') PORT_CHAR('Z')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_2_PAD) PORT_CHAR(UCHAR_MAMEKEY(2_PAD))
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_3_PAD) PORT_CHAR(UCHAR_MAMEKEY(3_PAD))
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_Q)     PORT_CHAR('q') PORT_CHAR('Q')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_1)     PORT_CHAR('1') PORT_CHAR('!')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F2)    PORT_CHAR(UCHAR_MAMEKEY(F2))

	PORT_START("COL.6")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_BACKSPACE) PORT_CHAR(UCHAR_MAMEKEY(BACKSPACE),8) PORT_NAME("Backspace")
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_L)     PORT_CHAR('l') PORT_CHAR('L')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_STOP)  PORT_CHAR('.') PORT_CHAR('>')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_UNUSED )
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_UNUSED )
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_O)     PORT_CHAR('o') PORT_CHAR('O')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_9)     PORT_CHAR('9') PORT_CHAR('(')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F10)   PORT_CHAR(UCHAR_MAMEKEY(F10))

	PORT_START("COL.7")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_NAME("F14")
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_BACKSLASH2)    PORT_CHAR('`') PORT_CHAR('~')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_ENTER)         PORT_CHAR(UCHAR_MAMEKEY(ENTER)) PORT_NAME("Enter")
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_UNUSED )
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_UNUSED )
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_CLOSEBRACE)    PORT_CHAR(']') PORT_CHAR('}')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_EQUALS)        PORT_CHAR('=') PORT_CHAR('+')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_NAME("F13")

	PORT_START("COL.8")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_MINUS_PAD) PORT_CHAR(UCHAR_MAMEKEY(MINUS_PAD))
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_H)     PORT_CHAR('h') PORT_CHAR('H')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_N)     PORT_CHAR('n') PORT_CHAR('N')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_5_PAD) PORT_CHAR(UCHAR_MAMEKEY(5_PAD))
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_ASTERISK)  PORT_CHAR('*')
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_Y)     PORT_CHAR('y') PORT_CHAR('Y')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_6)     PORT_CHAR('6') PORT_CHAR('^')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F7)    PORT_CHAR(UCHAR_MAMEKEY(F7))

	PORT_START("COL.9")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_NAME("F16")
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_COLON) PORT_CHAR(';') PORT_CHAR(':')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_SLASH) PORT_CHAR('/') PORT_CHAR('?')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_NAME("F18")
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_DOWN)  PORT_CHAR(UCHAR_MAMEKEY(DOWN))
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_P)     PORT_CHAR('p') PORT_CHAR('P')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_0)     PORT_CHAR('0') PORT_CHAR(')')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F11)   PORT_CHAR(UCHAR_MAMEKEY(F11))

	PORT_START("COL.10")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_TAB)   PORT_CHAR('\t')
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_J)     PORT_CHAR('j') PORT_CHAR('J')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_M)     PORT_CHAR('m') PORT_CHAR('M')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_NAME("F19")
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_UP)    PORT_CHAR(UCHAR_MAMEKEY(UP))
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_U)     PORT_CHAR('u') PORT_CHAR('U')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_7)     PORT_CHAR('7') PORT_CHAR('&')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F8)    PORT_CHAR(UCHAR_MAMEKEY(F8))

	PORT_START("COL.11")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_NAME("F15")
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_QUOTE) PORT_CHAR('\'') PORT_CHAR('"')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_RSHIFT)    PORT_CHAR(UCHAR_MAMEKEY(RSHIFT))
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_NAME("F17")
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_LEFT)  PORT_CHAR(UCHAR_MAMEKEY(LEFT))
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_OPENBRACE) PORT_CHAR('[') PORT_CHAR('{')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_MINUS)     PORT_CHAR('-') PORT_CHAR('_')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F12)       PORT_CHAR(UCHAR_MAMEKEY(F12))

	PORT_START("COL.12")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_HOME)  PORT_CHAR(UCHAR_MAMEKEY(HOME))
	PORT_BIT( 0x02, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_K)     PORT_CHAR('k') PORT_CHAR('K')
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_COMMA) PORT_CHAR(',') PORT_CHAR('<')
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_NAME("F20")
	PORT_BIT( 0x10, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_RIGHT) PORT_CHAR(UCHAR_MAMEKEY(RIGHT))
	PORT_BIT( 0x20, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_I)     PORT_CHAR('i') PORT_CHAR('I')
	PORT_BIT( 0x40, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_8)     PORT_CHAR('8') PORT_CHAR('*')
	PORT_BIT( 0x80, IP_ACTIVE_HIGH, IPT_KEYBOARD ) PORT_CODE(KEYCODE_F9)    PORT_CHAR(UCHAR_MAMEKEY(F9))

	PORT_START("COL.13")
	PORT_BIT( 0xff, IP_ACTIVE_HIGH, IPT_UNUSED )

	PORT_START("COL.14")
	PORT_BIT( 0xff, IP_ACTIVE_HIGH, IPT_UNUSED )

	PORT_START("COL.15")
	PORT_DIPNAME( 0x07, 0x00, "Language Code" )
	PORT_DIPSETTING(    0x00, "US English" )
	PORT_DIPSETTING(    0x01, "UK/Int. English" )
	PORT_DIPSETTING(    0x02, "Danish" )
	PORT_DIPSETTING(    0x03, "German" )
	PORT_DIPSETTING(    0x04, "Swedish/Finnish" )
	PORT_DIPSETTING(    0x05, "Norwegian" )
	PORT_DIPSETTING(    0x06, "Spanish" )
	PORT_DIPSETTING(    0x07, "Italian" )
	PORT_BIT( 0xf8, IP_ACTIVE_HIGH, IPT_UNUSED )
INPUT_PORTS_END


//-------------------------------------------------
//  input_ports - device-specific input ports
//-------------------------------------------------

ioport_constructor dmv_keyboard_device::device_input_ports() const
{
	return INPUT_PORTS_NAME( dmv_keyboard );
}


//**************************************************************************
//  LIVE DEVICE
//**************************************************************************

//-------------------------------------------------
//  dmv_keyboard_device - constructor
//-------------------------------------------------

dmv_keyboard_device::dmv_keyboard_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock)
	: device_t(mconfig, DMV_KEYBOARD, tag, owner, clock)
	, m_maincpu(*this, "mcu")
	, m_keyboard(*this, "COL.%u", 0)
{
}

//-------------------------------------------------
//  device_start - device-specific startup
//-------------------------------------------------

void dmv_keyboard_device::device_start()
{
	// register for state saving
	save_item(NAME(m_col));
	save_item(NAME(m_sd_data_state));
	save_item(NAME(m_sd_poll_state));
}


//-------------------------------------------------
//  device_reset - device-specific reset
//-------------------------------------------------

void dmv_keyboard_device::device_reset()
{
	m_col = 0;
	m_sd_data_state = 1;
	m_sd_poll_state = 1;
}

//-------------------------------------------------
//  device_add_mconfig - add device configuration
//-------------------------------------------------

void dmv_keyboard_device::device_add_mconfig(machine_config &config)
{
	I8741A(config, m_maincpu, XTAL(6'000'000));
	m_maincpu->p1_in_cb().set(FUNC(dmv_keyboard_device::port1_r));
	m_maincpu->p2_in_cb().set(FUNC(dmv_keyboard_device::port2_r));
	m_maincpu->p2_out_cb().set(FUNC(dmv_keyboard_device::port2_w));
}


//-------------------------------------------------
//  rom_region - device-specific ROM region
//-------------------------------------------------

const tiny_rom_entry *dmv_keyboard_device::device_rom_region() const
{
	return ROM_NAME( dmv_keyboard );
}


//-------------------------------------------------
//  port1_r -
//-------------------------------------------------

uint8_t dmv_keyboard_device::port1_r()
{
	return m_keyboard[m_col]->read();
}

//-------------------------------------------------
//  port2_r
//-------------------------------------------------

uint8_t dmv_keyboard_device::port2_r()
{
	return ((m_sd_data_state | m_sd_poll_state) << 7) | m_col;
}

//-------------------------------------------------
//  port2_w
//-------------------------------------------------

void dmv_keyboard_device::port2_w(uint8_t data)
{
	/*
	   P2.0    col 0
	   P2.1    col 1
	   P2.2    col 2
	   P2.3    col 3
	   P2.7    SDATA
	*/

	m_col = data & 0x0f;
	m_sd_data_state = BIT(data, 7);
}

//-------------------------------------------------
//  sd_poll_w
//-------------------------------------------------

DECLARE_WRITE_LINE_MEMBER(dmv_keyboard_device::sd_poll_w)
{
	if (m_sd_poll_state && !state)
		m_maincpu->upi41_master_w(0, 0);

	m_sd_poll_state = state;
}

//-------------------------------------------------
//  sd_poll_r
//-------------------------------------------------

DECLARE_READ_LINE_MEMBER(dmv_keyboard_device::sd_poll_r)
{
	return m_sd_data_state;
}
