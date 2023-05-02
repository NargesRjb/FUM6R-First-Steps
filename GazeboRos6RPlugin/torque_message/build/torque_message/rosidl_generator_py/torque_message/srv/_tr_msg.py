# generated from rosidl_generator_py/resource/_idl.py.em
# with input from torque_message:srv/TRMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TRMsg_Request(type):
    """Metaclass of message 'TRMsg_Request'."""

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
            module = import_type_support('torque_message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'torque_message.srv.TRMsg_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tr_msg__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tr_msg__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tr_msg__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tr_msg__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tr_msg__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TRMsg_Request(metaclass=Metaclass_TRMsg_Request):
    """Message class 'TRMsg_Request'."""

    __slots__ = [
        '_t1',
        '_t2',
        '_t3',
        '_t4',
        '_t5',
        '_t6',
    ]

    _fields_and_field_types = {
        't1': 'double',
        't2': 'double',
        't3': 'double',
        't4': 'double',
        't5': 'double',
        't6': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.t1 = kwargs.get('t1', float())
        self.t2 = kwargs.get('t2', float())
        self.t3 = kwargs.get('t3', float())
        self.t4 = kwargs.get('t4', float())
        self.t5 = kwargs.get('t5', float())
        self.t6 = kwargs.get('t6', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.t1 != other.t1:
            return False
        if self.t2 != other.t2:
            return False
        if self.t3 != other.t3:
            return False
        if self.t4 != other.t4:
            return False
        if self.t5 != other.t5:
            return False
        if self.t6 != other.t6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def t1(self):
        """Message field 't1'."""
        return self._t1

    @t1.setter
    def t1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't1' field must be of type 'float'"
        self._t1 = value

    @property
    def t2(self):
        """Message field 't2'."""
        return self._t2

    @t2.setter
    def t2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't2' field must be of type 'float'"
        self._t2 = value

    @property
    def t3(self):
        """Message field 't3'."""
        return self._t3

    @t3.setter
    def t3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't3' field must be of type 'float'"
        self._t3 = value

    @property
    def t4(self):
        """Message field 't4'."""
        return self._t4

    @t4.setter
    def t4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't4' field must be of type 'float'"
        self._t4 = value

    @property
    def t5(self):
        """Message field 't5'."""
        return self._t5

    @t5.setter
    def t5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't5' field must be of type 'float'"
        self._t5 = value

    @property
    def t6(self):
        """Message field 't6'."""
        return self._t6

    @t6.setter
    def t6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't6' field must be of type 'float'"
        self._t6 = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TRMsg_Response(type):
    """Metaclass of message 'TRMsg_Response'."""

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
            module = import_type_support('torque_message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'torque_message.srv.TRMsg_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tr_msg__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tr_msg__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tr_msg__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tr_msg__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tr_msg__response

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from sensor_msgs.msg import Imu
            if Imu.__class__._TYPE_SUPPORT is None:
                Imu.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS__DEFAULT': -1,
        }

    @property
    def STATUS__DEFAULT(cls):
        """Return default value for message field 'status'."""
        return -1


class TRMsg_Response(metaclass=Metaclass_TRMsg_Response):
    """Message class 'TRMsg_Response'."""

    __slots__ = [
        '_status',
        '_r1v',
        '_r2v',
        '_r3v',
        '_r1t',
        '_r2t',
        '_r3t',
        '_r1p',
        '_r2p',
        '_r3p',
        '_r1',
        '_r2',
        '_r3',
        '_r4',
        '_r5',
        '_r6',
        '_imu',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'r1v': 'geometry_msgs/Vector3',
        'r2v': 'geometry_msgs/Vector3',
        'r3v': 'geometry_msgs/Vector3',
        'r1t': 'geometry_msgs/Vector3',
        'r2t': 'geometry_msgs/Vector3',
        'r3t': 'geometry_msgs/Vector3',
        'r1p': 'geometry_msgs/Vector3',
        'r2p': 'geometry_msgs/Vector3',
        'r3p': 'geometry_msgs/Vector3',
        'r1': 'double',
        'r2': 'double',
        'r3': 'double',
        'r4': 'double',
        'r5': 'double',
        'r6': 'double',
        'imu': 'sensor_msgs/Imu',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Imu'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get(
            'status', TRMsg_Response.STATUS__DEFAULT)
        from geometry_msgs.msg import Vector3
        self.r1v = kwargs.get('r1v', Vector3())
        from geometry_msgs.msg import Vector3
        self.r2v = kwargs.get('r2v', Vector3())
        from geometry_msgs.msg import Vector3
        self.r3v = kwargs.get('r3v', Vector3())
        from geometry_msgs.msg import Vector3
        self.r1t = kwargs.get('r1t', Vector3())
        from geometry_msgs.msg import Vector3
        self.r2t = kwargs.get('r2t', Vector3())
        from geometry_msgs.msg import Vector3
        self.r3t = kwargs.get('r3t', Vector3())
        from geometry_msgs.msg import Vector3
        self.r1p = kwargs.get('r1p', Vector3())
        from geometry_msgs.msg import Vector3
        self.r2p = kwargs.get('r2p', Vector3())
        from geometry_msgs.msg import Vector3
        self.r3p = kwargs.get('r3p', Vector3())
        self.r1 = kwargs.get('r1', float())
        self.r2 = kwargs.get('r2', float())
        self.r3 = kwargs.get('r3', float())
        self.r4 = kwargs.get('r4', float())
        self.r5 = kwargs.get('r5', float())
        self.r6 = kwargs.get('r6', float())
        from sensor_msgs.msg import Imu
        self.imu = kwargs.get('imu', Imu())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.r1v != other.r1v:
            return False
        if self.r2v != other.r2v:
            return False
        if self.r3v != other.r3v:
            return False
        if self.r1t != other.r1t:
            return False
        if self.r2t != other.r2t:
            return False
        if self.r3t != other.r3t:
            return False
        if self.r1p != other.r1p:
            return False
        if self.r2p != other.r2p:
            return False
        if self.r3p != other.r3p:
            return False
        if self.r1 != other.r1:
            return False
        if self.r2 != other.r2:
            return False
        if self.r3 != other.r3:
            return False
        if self.r4 != other.r4:
            return False
        if self.r5 != other.r5:
            return False
        if self.r6 != other.r6:
            return False
        if self.imu != other.imu:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def r1v(self):
        """Message field 'r1v'."""
        return self._r1v

    @r1v.setter
    def r1v(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'r1v' field must be a sub message of type 'Vector3'"
        self._r1v = value

    @property
    def r2v(self):
        """Message field 'r2v'."""
        return self._r2v

    @r2v.setter
    def r2v(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'r2v' field must be a sub message of type 'Vector3'"
        self._r2v = value

    @property
    def r3v(self):
        """Message field 'r3v'."""
        return self._r3v

    @r3v.setter
    def r3v(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'r3v' field must be a sub message of type 'Vector3'"
        self._r3v = value

    @property
    def r1t(self):
        """Message field 'r1t'."""
        return self._r1t

    @r1t.setter
    def r1t(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'r1t' field must be a sub message of type 'Vector3'"
        self._r1t = value

    @property
    def r2t(self):
        """Message field 'r2t'."""
        return self._r2t

    @r2t.setter
    def r2t(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'r2t' field must be a sub message of type 'Vector3'"
        self._r2t = value

    @property
    def r3t(self):
        """Message field 'r3t'."""
        return self._r3t

    @r3t.setter
    def r3t(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'r3t' field must be a sub message of type 'Vector3'"
        self._r3t = value

    @property
    def r1p(self):
        """Message field 'r1p'."""
        return self._r1p

    @r1p.setter
    def r1p(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'r1p' field must be a sub message of type 'Vector3'"
        self._r1p = value

    @property
    def r2p(self):
        """Message field 'r2p'."""
        return self._r2p

    @r2p.setter
    def r2p(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'r2p' field must be a sub message of type 'Vector3'"
        self._r2p = value

    @property
    def r3p(self):
        """Message field 'r3p'."""
        return self._r3p

    @r3p.setter
    def r3p(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'r3p' field must be a sub message of type 'Vector3'"
        self._r3p = value

    @property
    def r1(self):
        """Message field 'r1'."""
        return self._r1

    @r1.setter
    def r1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r1' field must be of type 'float'"
        self._r1 = value

    @property
    def r2(self):
        """Message field 'r2'."""
        return self._r2

    @r2.setter
    def r2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r2' field must be of type 'float'"
        self._r2 = value

    @property
    def r3(self):
        """Message field 'r3'."""
        return self._r3

    @r3.setter
    def r3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r3' field must be of type 'float'"
        self._r3 = value

    @property
    def r4(self):
        """Message field 'r4'."""
        return self._r4

    @r4.setter
    def r4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r4' field must be of type 'float'"
        self._r4 = value

    @property
    def r5(self):
        """Message field 'r5'."""
        return self._r5

    @r5.setter
    def r5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r5' field must be of type 'float'"
        self._r5 = value

    @property
    def r6(self):
        """Message field 'r6'."""
        return self._r6

    @r6.setter
    def r6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r6' field must be of type 'float'"
        self._r6 = value

    @property
    def imu(self):
        """Message field 'imu'."""
        return self._imu

    @imu.setter
    def imu(self, value):
        if __debug__:
            from sensor_msgs.msg import Imu
            assert \
                isinstance(value, Imu), \
                "The 'imu' field must be a sub message of type 'Imu'"
        self._imu = value


class Metaclass_TRMsg(type):
    """Metaclass of service 'TRMsg'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('torque_message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'torque_message.srv.TRMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tr_msg

            from torque_message.srv import _tr_msg
            if _tr_msg.Metaclass_TRMsg_Request._TYPE_SUPPORT is None:
                _tr_msg.Metaclass_TRMsg_Request.__import_type_support__()
            if _tr_msg.Metaclass_TRMsg_Response._TYPE_SUPPORT is None:
                _tr_msg.Metaclass_TRMsg_Response.__import_type_support__()


class TRMsg(metaclass=Metaclass_TRMsg):
    from torque_message.srv._tr_msg import TRMsg_Request as Request
    from torque_message.srv._tr_msg import TRMsg_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
