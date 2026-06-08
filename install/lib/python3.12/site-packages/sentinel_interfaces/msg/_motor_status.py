# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentinel_interfaces:msg/MotorStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorStatus(type):
    """Metaclass of message 'MotorStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sentinel_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sentinel_interfaces.msg.MotorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorStatus(metaclass=Metaclass_MotorStatus):
    """Message class 'MotorStatus'."""

    __slots__ = [
        '_pan_moving',
        '_pan_moving_status',
        '_pan_pwm',
        '_pan_current',
        '_pan_velocity',
        '_pan_position',
        '_pan_voltage',
        '_pan_temperature',
        '_pan_hw_error',
        '_tilt_moving',
        '_tilt_moving_status',
        '_tilt_pwm',
        '_tilt_current',
        '_tilt_velocity',
        '_tilt_position',
        '_tilt_voltage',
        '_tilt_temperature',
        '_tilt_hw_error',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'pan_moving': 'uint8',
        'pan_moving_status': 'uint8',
        'pan_pwm': 'uint16',
        'pan_current': 'uint16',
        'pan_velocity': 'uint32',
        'pan_position': 'uint32',
        'pan_voltage': 'uint16',
        'pan_temperature': 'uint8',
        'pan_hw_error': 'uint8',
        'tilt_moving': 'uint8',
        'tilt_moving_status': 'uint8',
        'tilt_pwm': 'uint16',
        'tilt_current': 'uint16',
        'tilt_velocity': 'uint32',
        'tilt_position': 'uint32',
        'tilt_voltage': 'uint16',
        'tilt_temperature': 'uint8',
        'tilt_hw_error': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pan_moving = kwargs.get('pan_moving', int())
        self.pan_moving_status = kwargs.get('pan_moving_status', int())
        self.pan_pwm = kwargs.get('pan_pwm', int())
        self.pan_current = kwargs.get('pan_current', int())
        self.pan_velocity = kwargs.get('pan_velocity', int())
        self.pan_position = kwargs.get('pan_position', int())
        self.pan_voltage = kwargs.get('pan_voltage', int())
        self.pan_temperature = kwargs.get('pan_temperature', int())
        self.pan_hw_error = kwargs.get('pan_hw_error', int())
        self.tilt_moving = kwargs.get('tilt_moving', int())
        self.tilt_moving_status = kwargs.get('tilt_moving_status', int())
        self.tilt_pwm = kwargs.get('tilt_pwm', int())
        self.tilt_current = kwargs.get('tilt_current', int())
        self.tilt_velocity = kwargs.get('tilt_velocity', int())
        self.tilt_position = kwargs.get('tilt_position', int())
        self.tilt_voltage = kwargs.get('tilt_voltage', int())
        self.tilt_temperature = kwargs.get('tilt_temperature', int())
        self.tilt_hw_error = kwargs.get('tilt_hw_error', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pan_moving != other.pan_moving:
            return False
        if self.pan_moving_status != other.pan_moving_status:
            return False
        if self.pan_pwm != other.pan_pwm:
            return False
        if self.pan_current != other.pan_current:
            return False
        if self.pan_velocity != other.pan_velocity:
            return False
        if self.pan_position != other.pan_position:
            return False
        if self.pan_voltage != other.pan_voltage:
            return False
        if self.pan_temperature != other.pan_temperature:
            return False
        if self.pan_hw_error != other.pan_hw_error:
            return False
        if self.tilt_moving != other.tilt_moving:
            return False
        if self.tilt_moving_status != other.tilt_moving_status:
            return False
        if self.tilt_pwm != other.tilt_pwm:
            return False
        if self.tilt_current != other.tilt_current:
            return False
        if self.tilt_velocity != other.tilt_velocity:
            return False
        if self.tilt_position != other.tilt_position:
            return False
        if self.tilt_voltage != other.tilt_voltage:
            return False
        if self.tilt_temperature != other.tilt_temperature:
            return False
        if self.tilt_hw_error != other.tilt_hw_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pan_moving(self):
        """Message field 'pan_moving'."""
        return self._pan_moving

    @pan_moving.setter
    def pan_moving(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_moving' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pan_moving' field must be an unsigned integer in [0, 255]"
        self._pan_moving = value

    @builtins.property
    def pan_moving_status(self):
        """Message field 'pan_moving_status'."""
        return self._pan_moving_status

    @pan_moving_status.setter
    def pan_moving_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_moving_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pan_moving_status' field must be an unsigned integer in [0, 255]"
        self._pan_moving_status = value

    @builtins.property
    def pan_pwm(self):
        """Message field 'pan_pwm'."""
        return self._pan_pwm

    @pan_pwm.setter
    def pan_pwm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_pwm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pan_pwm' field must be an unsigned integer in [0, 65535]"
        self._pan_pwm = value

    @builtins.property
    def pan_current(self):
        """Message field 'pan_current'."""
        return self._pan_current

    @pan_current.setter
    def pan_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_current' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pan_current' field must be an unsigned integer in [0, 65535]"
        self._pan_current = value

    @builtins.property
    def pan_velocity(self):
        """Message field 'pan_velocity'."""
        return self._pan_velocity

    @pan_velocity.setter
    def pan_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_velocity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pan_velocity' field must be an unsigned integer in [0, 4294967295]"
        self._pan_velocity = value

    @builtins.property
    def pan_position(self):
        """Message field 'pan_position'."""
        return self._pan_position

    @pan_position.setter
    def pan_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_position' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pan_position' field must be an unsigned integer in [0, 4294967295]"
        self._pan_position = value

    @builtins.property
    def pan_voltage(self):
        """Message field 'pan_voltage'."""
        return self._pan_voltage

    @pan_voltage.setter
    def pan_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_voltage' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pan_voltage' field must be an unsigned integer in [0, 65535]"
        self._pan_voltage = value

    @builtins.property
    def pan_temperature(self):
        """Message field 'pan_temperature'."""
        return self._pan_temperature

    @pan_temperature.setter
    def pan_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_temperature' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pan_temperature' field must be an unsigned integer in [0, 255]"
        self._pan_temperature = value

    @builtins.property
    def pan_hw_error(self):
        """Message field 'pan_hw_error'."""
        return self._pan_hw_error

    @pan_hw_error.setter
    def pan_hw_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_hw_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pan_hw_error' field must be an unsigned integer in [0, 255]"
        self._pan_hw_error = value

    @builtins.property
    def tilt_moving(self):
        """Message field 'tilt_moving'."""
        return self._tilt_moving

    @tilt_moving.setter
    def tilt_moving(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_moving' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tilt_moving' field must be an unsigned integer in [0, 255]"
        self._tilt_moving = value

    @builtins.property
    def tilt_moving_status(self):
        """Message field 'tilt_moving_status'."""
        return self._tilt_moving_status

    @tilt_moving_status.setter
    def tilt_moving_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_moving_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tilt_moving_status' field must be an unsigned integer in [0, 255]"
        self._tilt_moving_status = value

    @builtins.property
    def tilt_pwm(self):
        """Message field 'tilt_pwm'."""
        return self._tilt_pwm

    @tilt_pwm.setter
    def tilt_pwm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_pwm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tilt_pwm' field must be an unsigned integer in [0, 65535]"
        self._tilt_pwm = value

    @builtins.property
    def tilt_current(self):
        """Message field 'tilt_current'."""
        return self._tilt_current

    @tilt_current.setter
    def tilt_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_current' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tilt_current' field must be an unsigned integer in [0, 65535]"
        self._tilt_current = value

    @builtins.property
    def tilt_velocity(self):
        """Message field 'tilt_velocity'."""
        return self._tilt_velocity

    @tilt_velocity.setter
    def tilt_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_velocity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tilt_velocity' field must be an unsigned integer in [0, 4294967295]"
        self._tilt_velocity = value

    @builtins.property
    def tilt_position(self):
        """Message field 'tilt_position'."""
        return self._tilt_position

    @tilt_position.setter
    def tilt_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_position' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tilt_position' field must be an unsigned integer in [0, 4294967295]"
        self._tilt_position = value

    @builtins.property
    def tilt_voltage(self):
        """Message field 'tilt_voltage'."""
        return self._tilt_voltage

    @tilt_voltage.setter
    def tilt_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_voltage' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tilt_voltage' field must be an unsigned integer in [0, 65535]"
        self._tilt_voltage = value

    @builtins.property
    def tilt_temperature(self):
        """Message field 'tilt_temperature'."""
        return self._tilt_temperature

    @tilt_temperature.setter
    def tilt_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_temperature' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tilt_temperature' field must be an unsigned integer in [0, 255]"
        self._tilt_temperature = value

    @builtins.property
    def tilt_hw_error(self):
        """Message field 'tilt_hw_error'."""
        return self._tilt_hw_error

    @tilt_hw_error.setter
    def tilt_hw_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_hw_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tilt_hw_error' field must be an unsigned integer in [0, 255]"
        self._tilt_hw_error = value
