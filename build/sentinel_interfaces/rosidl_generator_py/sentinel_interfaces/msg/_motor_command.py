# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentinel_interfaces:msg/MotorCommand.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorCommand(type):
    """Metaclass of message 'MotorCommand'."""

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
                'sentinel_interfaces.msg.MotorCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorCommand(metaclass=Metaclass_MotorCommand):
    """Message class 'MotorCommand'."""

    __slots__ = [
        '_mode',
        '_tracking',
        '_btn_mask',
        '_pan_pos',
        '_tilt_pos',
        '_scan_step',
        '_manual_step',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'mode': 'uint8',
        'tracking': 'uint8',
        'btn_mask': 'uint8',
        'pan_pos': 'uint16',
        'tilt_pos': 'uint16',
        'scan_step': 'uint8',
        'manual_step': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.mode = kwargs.get('mode', int())
        self.tracking = kwargs.get('tracking', int())
        self.btn_mask = kwargs.get('btn_mask', int())
        self.pan_pos = kwargs.get('pan_pos', int())
        self.tilt_pos = kwargs.get('tilt_pos', int())
        self.scan_step = kwargs.get('scan_step', int())
        self.manual_step = kwargs.get('manual_step', int())

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
        if self.mode != other.mode:
            return False
        if self.tracking != other.tracking:
            return False
        if self.btn_mask != other.btn_mask:
            return False
        if self.pan_pos != other.pan_pos:
            return False
        if self.tilt_pos != other.tilt_pos:
            return False
        if self.scan_step != other.scan_step:
            return False
        if self.manual_step != other.manual_step:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def tracking(self):
        """Message field 'tracking'."""
        return self._tracking

    @tracking.setter
    def tracking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tracking' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tracking' field must be an unsigned integer in [0, 255]"
        self._tracking = value

    @builtins.property
    def btn_mask(self):
        """Message field 'btn_mask'."""
        return self._btn_mask

    @btn_mask.setter
    def btn_mask(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'btn_mask' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'btn_mask' field must be an unsigned integer in [0, 255]"
        self._btn_mask = value

    @builtins.property
    def pan_pos(self):
        """Message field 'pan_pos'."""
        return self._pan_pos

    @pan_pos.setter
    def pan_pos(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pan_pos' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pan_pos' field must be an unsigned integer in [0, 65535]"
        self._pan_pos = value

    @builtins.property
    def tilt_pos(self):
        """Message field 'tilt_pos'."""
        return self._tilt_pos

    @tilt_pos.setter
    def tilt_pos(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tilt_pos' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tilt_pos' field must be an unsigned integer in [0, 65535]"
        self._tilt_pos = value

    @builtins.property
    def scan_step(self):
        """Message field 'scan_step'."""
        return self._scan_step

    @scan_step.setter
    def scan_step(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'scan_step' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'scan_step' field must be an unsigned integer in [0, 255]"
        self._scan_step = value

    @builtins.property
    def manual_step(self):
        """Message field 'manual_step'."""
        return self._manual_step

    @manual_step.setter
    def manual_step(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'manual_step' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'manual_step' field must be an unsigned integer in [0, 255]"
        self._manual_step = value
