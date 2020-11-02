import React, { Component } from 'react';
import PropTypes from 'prop-types';

class MyClassComponent extends Component {
  static defaultProps = {
    name: '기본 이름2',
  };
  static propTypes = {
    name: PropTypes.string,
    favoriteNumber: PropTypes.number.isRequired,
  };
  render() {
    const { name, favoriteNumber, children } = this.props; //비구조화 할당
    return (
      <div>
        안녕하세요, 제 이름은 {name} 입니다.
        <br />
        children 값은 {children} 입니다. <br />
        제가 좋아하는 숫자는 {favoriteNumber} 입니다.
      </div>
    );
  }
}

//클래스 외부에서 defaultProps, propTypes 지정하기
// MyClassComponent.defaultProps = {
//   name: '기본 이름2',
// };

// MyClassComponent.propTypes = {
//   name: PropTypes.string,
//   favoriteNumber: PropTypes.number.isRequired,
// };

export default MyClassComponent;